
#
# Copyright (C) 2019 Christoph Sommer <sommer@ccs-labs.org>
#
# Documentation for these modules is at http://veins.car2x.org/
#
# SPDX-License-Identifier: GPL-2.0-or-later
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
#

# Use any path of the gRPC install.
GRPC_TARGET := install/include/grpc


.PHONY: all clean

all: $(GRPC_TARGET)
	$(MAKE) -C omnetpp all
	$(MAKE) -C liveOppServation all

clean:
	$(MAKE) -C omnetpp clean
	$(MAKE) -C liveOppServation clean
	rm -rf build

# Place the source in a system wide directory so it can be shared with other projects.
GRPC_SRC := ../grpc
$(GRPC_SRC):
	$(info Cloning gRPC...)
	mkdir -p $(GRPC_SRC) \
	&& cd $(GRPC_SRC) \
	&& git clone https://github.com/grpc/grpc.git . \
	&& git submodule update --init
include $(shell opp_configfilepath)
# Install locally for easy removal and configuration changes.
GRPC_BUILD := build/grpc/$(CONFIGNAME)
# Configure step requires root since zlib renames a file in the source tree.
$(GRPC_TARGET): $(GRPC_SRC)
	$(info Building gRPC...)
	@rm -f $(GRPC_BUILD)/CMakeCache.txt; \
	cmake -B $(GRPC_BUILD) -S $(GRPC_SRC) \
		-D ABSL_PROPAGATE_CXX_STD=ON \
		-D BUILD_SHARED_LIBS=1 \
		-D BUILD_TESTING=0 \
		-D CARES_BUILD_TOOLS=0 \
		-D CARES_SHARED=1 \
		-D CARES_STATIC=0 \
		-D CMAKE_BUILD_TYPE=$(if $D,Debug,Release) \
		-D CMAKE_C_COMPILER="/usr/bin/clang" \
		-D CMAKE_C_COMPILER_LAUNCHER=ccache \
		-D CMAKE_C_FLAGS="$(CFLAGS)" \
		-D CMAKE_CXX_COMPILER="/usr/bin/clang++" \
		-D CMAKE_CXX_COMPILER_LAUNCHER=ccache \
		-D CMAKE_CXX_FLAGS="$(CFLAGS)" \
		-D CMAKE_CXX_STANDARD=17 \
		-D CMAKE_INSTALL_PREFIX=install \
		-D CMAKE_INSTALL_RPATH=$(abspath install/lib) \
		-D RE2_BUILD_TESTING=0 \
		-D gRPC_BUILD_GRPC_CSHARP_PLUGIN=0 \
		-D gRPC_BUILD_GRPC_NODE_PLUGIN=0 \
		-D gRPC_BUILD_GRPC_OBJECTIVE_C_PLUGIN=0 \
		-D gRPC_BUILD_GRPC_PHP_PLUGIN=0 \
		-D gRPC_BUILD_GRPC_PYTHON_PLUGIN=0 \
		-D gRPC_BUILD_GRPC_RUBY_PLUGIN=0 \
		-D protobuf_ALLOW_CCACHE=1 \
		-D protobuf_BUILD_SHARED_LIBS=1 \
	&& $(MAKE) -C $(GRPC_BUILD) \
	&& $(MAKE) -C $(GRPC_BUILD) install

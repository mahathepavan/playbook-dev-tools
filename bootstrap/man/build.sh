#!/usr/bin/env bash

# This code Copyright 2012 Todd Mortimer <todd.mortimer@gmail.com>
#
# You may do whatever you like with this code, provided the above
# copyright notice and this paragraph are preserved.


set -e
source ../../lib.sh
TASK=fetch

DISTVER="man-1.6g"
DISTSUFFIX="tar.gz"
DISTFILES="http://primates.ximian.com/~flucifredi/man/$DISTVER.$DISTSUFFIX"
UNPACKCOMD="tar -xzf"

CONFIGURE_CMD="CC=$PBTARGETARCH-gcc
                BUILD_CC=/usr/bin/gcc
                ./configure
                -prefix=$DESTDIR
                -compatibility_mode_for_colored_groff
                "

package_init "$@"
package_fetch
package_patch
package_build
package_install
# overwrite the generated man.conf with our own
cp $EXECDIR/man.conf $DESTDIR/lib/man.conf
package_bundle


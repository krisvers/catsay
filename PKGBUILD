# Maintainer: Nicholas Kelly at https://github.com/krisvers

pkgver=1.0
pkgrel=1
pkgname=catsay
pkgdesc="Cowsay but cat. Written in C with standard libraries."
url="https://github.com/krisvers/catsay"
license=("MIT")
arch=(x86_64 i686 i386 aarch64 arm)
provides=("catsay")
source=("https://github.com/krisvers/catsay/releases/download/$pkgver/$pkgname-$pkgver.tar.gz")
sha256sums=("18b5e4c1cbae5e03d1b17dabd157a3d9698b64ee8b17a232f9d292269dff2a8d")

build() {
	cd "$srcdir/$pkgname-$pkgver"
	
	make CC=gcc || return 1
}

package() {
	cd $pkgname-$pkgver
	make PREFIX=/usr install
}

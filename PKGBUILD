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
sha256sums=("4a4f6bc25cc639d7add3dfe3999b7638f41fa1e7647c6bbd9774bcf732db14c4")

build() {
	cd "$srcdir/$pkgname-$pkgver"
	
	make CC=gcc || return 1
}

package() {
	cd $pkgname-$pkgver
	make PREFIX=/usr install
}

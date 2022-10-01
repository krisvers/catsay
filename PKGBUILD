# Maintainer: Nicholas Kelly at https://github.com/krisvers

pkgver=1.0
pkgrel=1
pkgname=catsay
pkgdesc="Cowsay but cat. Written in C with standard libraries."
url="https://github.com/krisvers/catsay"
license=("MIT")
arch=(x86_64 i686 i386 aarch64 arm)
provides=("catsay")
source=("https://github.com/krisvers/catsay/releases/v$pkgver/$pkgname-$pkgver.tar.gz")

build() {
	cd "$srcdir/$pkgname-$pkgver"
	
	make CC=gcc || return 1
}

package() {
	cd $pkgname-$pkgver
	make PREFIX=/usr install
}

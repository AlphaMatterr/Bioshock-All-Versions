GO_EASY_ON_ME = 1
ARCHS = armv7 arm64

include theos/makefiles/common.mk

TWEAK_NAME = bioShock
bioShock_FILES = Tweak.xm
bioShock_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"

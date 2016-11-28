

PRODUCT_AAPT_CONFIG := normal hdpi xhdpi
PRODUCT_AAPT_PREF_CONFIG := xhdpi

PRODUCT_PROPERTY_OVERRIDES += \
    ro.sf.lcd_density=320

DEVICE_PACKAGE_OVERLAYS := device/asus/T00F/overlay
$(call inherit-product-if-exists, vendor/asus/T00F/T00F-vendor.mk)


# Ramdisk config of governors
ADDITIONAL_DEFAULT_PROPERTIES += \
    ro.sys.perf.device.powersave=800000 \
    ro.sys.perf.device.full=1633000 \
    ro.sys.perf.device.touchboost=1330000

# Inherit from ctp-common
    $(call inherit-product, device/asus/ctp-common/ctp.mk)

# call dalvik heap config
		$(call inherit-product-if-exists, frameworks/native/build/phone-xhdpi-2048-dalvik-heap.mk)

# call hwui memory config
		$(call inherit-product-if-exists, frameworks/native/build/phone-xxhdpi-2048-hwui-memory.mk)

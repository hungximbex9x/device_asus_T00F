#
# Copyright 2013 The Android Open-Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# inherit from common ctp-common
-include device/asus/ctp-common/BoardConfigCommon.mk

#cmhw
BOARD_HARDWARE_CLASS += device/asus/T00F/cmhw

# SELinux
BOARD_SEPOLICY_DIRS += device/asus/T00F/sepolicy

TARGET_TAP_TO_WAKE_NODE := "/sys/devices/pci0000:00/0000:00:00.3/i2c-0/0-0020/input/input1/dclick_mode"

# Use the non-open-source parts, if they're present
-include vendor/asus/T00F/BoardConfigVendor.mk

# Charger
BOARD_HEALTHD_CUSTOM_CHARGER_RES := device/asus/T00F/charger

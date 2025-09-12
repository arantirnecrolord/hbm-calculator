override NAME    := hbm-calculator
override DESC    := HBM NTM Craft Calculator
override URL     := https://github.com/arantirnecrolord/hbm-calculator
override VERSION := v0.1-git

override define LOGO

              ==========           ::::::::::
        ::::::::=====::::::::      ::::::::::
        ::::::::=====::::::::      ::::::::::
      ::::::::::=====:::::::::::   ::::::::::
   ===::::::::==========:::::::::::::::::::::
   =====::::::::=====::::::::::::::::::::::::
   =====::::::::=====::::::::::::::::::::::::
   =====::::::::=====::::::::::::::::::::::::
   ===::::::::==========:::::::::::::::::::::
   ===::::::::==========:::::::::::::::::::::
      ::::::::::=====:::::::::::   ::::::::::
        ::::::::=====::::::::      ::::::::::
              ==========           ::::::::::
              ==========           ::::::::::


endef

#
# Build targets
#

override BIN_TARGETS := hbm-calculator

override bin_src_hbm-calculator := $(call recursive_match,$(SRCDIR),*.c *.cpp *.cc *.cxx)

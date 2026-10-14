################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-2004879021: ../c2000.syscfg
	@echo 'SysConfig - building file: "$<"'
	"C:/ti/ccs2101/ccs/utils/sysconfig_1.28.1/sysconfig_cli.bat" -s "C:/ti/C2000Ware_26_01_00_00/.metadata/sdk.json" -d "F2838x" -p "337bga" -r "F2838x_337bga" --script "C:/Users/ethanmarkow/repos/Capella/c2000.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-2004879021 ../c2000.syscfg
syscfg/board.h: build-2004879021
syscfg/board.cmd.genlibs: build-2004879021
syscfg/board.opt: build-2004879021
syscfg/board.json: build-2004879021
syscfg/pinmux.csv: build-2004879021
syscfg/epwm.dot: build-2004879021
syscfg/adc.dot: build-2004879021
syscfg/c2000ware_libraries.cmd.genlibs: build-2004879021
syscfg/c2000ware_libraries.opt: build-2004879021
syscfg/c2000ware_libraries.c: build-2004879021
syscfg/c2000ware_libraries.h: build-2004879021
syscfg/clocktree.h: build-2004879021
syscfg: build-2004879021

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'C2000 Compiler - building file: "$<"'
	"C:/ti/ccs2101/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu64 --idiv_support=idiv0 --tmu_support=tmu0 --vcu_support=vcrc -Ooff --include_path="C:/Users/ethanmarkow/repos/Capella" --include_path="C:/Users/ethanmarkow/repos/Capella/device" --include_path="C:/ti/C2000Ware_26_01_00_00/driverlib/f2838x/driverlib/" --include_path="C:/ti/ccs2101/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/include" --define=DEBUG --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="C:/Users/ethanmarkow/repos/Capella/CPU1_RAM/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'C2000 Compiler - building file: "$<"'
	"C:/ti/ccs2101/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu64 --idiv_support=idiv0 --tmu_support=tmu0 --vcu_support=vcrc -Ooff --include_path="C:/Users/ethanmarkow/repos/Capella" --include_path="C:/Users/ethanmarkow/repos/Capella/device" --include_path="C:/ti/C2000Ware_26_01_00_00/driverlib/f2838x/driverlib/" --include_path="C:/ti/ccs2101/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/include" --define=DEBUG --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="C:/Users/ethanmarkow/repos/Capella/CPU1_RAM/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '



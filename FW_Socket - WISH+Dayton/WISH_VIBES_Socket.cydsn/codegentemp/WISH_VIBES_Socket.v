// ======================================================================
// WISH_VIBES_Socket.v generated from TopDesign.cysch
// 05/03/2024 at 15:46
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_ES 17
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 33
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 33
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 2
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 2
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0
`define CYDEV_CHIP_MEMBER_4X 7
`define CYDEV_CHIP_REVISION_4X_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 8
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 9
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4T 10
`define CYDEV_CHIP_REVISION_4T_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 11
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 12
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4W 13
`define CYDEV_CHIP_REVISION_4W_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AC 14
`define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AD 15
`define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AE 16
`define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 17
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Y 18
`define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Z 19
`define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 20
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 21
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 22
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4V 23
`define CYDEV_CHIP_REVISION_4V_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 24
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AA 25
`define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 26
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 27
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 28
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 29
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AB 30
`define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 31
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 32
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 33
`define CYDEV_CHIP_REVISION_6A_ES 17
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 33
`define CYDEV_CHIP_REVISION_6A_NO_UDB 33
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 37
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 38
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 2
`define CYDEV_CHIP_REVISION_USED 0
// Component: and_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0\and_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0\and_v1_0.v"
`endif

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// Component: cy_srff_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_srff_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_srff_v1_0\cy_srff_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_srff_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_srff_v1_0\cy_srff_v1_0.v"
`endif

// Component: cy_sync_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0\cy_sync_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0\cy_sync_v1_0.v"
`endif

// Component: AMuxHw_v1_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMuxHw_v1_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMuxHw_v1_50\AMuxHw_v1_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMuxHw_v1_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMuxHw_v1_50\AMuxHw_v1_50.v"
`endif

// Component: CyControlReg_v1_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80\CyControlReg_v1_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80\CyControlReg_v1_80.v"
`endif

// Component: mux_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10\mux_v1_10.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10\mux_v1_10.v"
`endif

// Component: DigitalComp_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\DigitalComp_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\DigitalComp_v1_0\DigitalComp_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\DigitalComp_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\DigitalComp_v1_0\DigitalComp_v1_0.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// Timer_v2_70(CaptureAlternatingFall=false, CaptureAlternatingRise=false, CaptureCount=2, CaptureCounterEnabled=false, CaptureInputEnabled=true, CaptureMode=1, CONTROL3=1, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeviceFamily=PSoC5, EnableMode=0, FF16=true, FF8=false, FixedFunction=true, FixedFunctionUsed=1, HWCaptureCounterEnabled=false, InterruptOnCapture=false, InterruptOnFIFOFull=false, InterruptOnTC=false, IntOnCapture=0, IntOnFIFOFull=0, IntOnTC=0, NumberOfCaptures=1, param45=1, Period=47999, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=rstSts, RunMode=0, SiliconRevision=0, SoftwareCaptureModeEnabled=false, SoftwareTriggerModeEnabled=false, TriggerInputEnabled=false, TriggerMode=0, UDB16=false, UDB24=false, UDB32=false, UDB8=false, UDBControlReg=false, UsesHWEnable=0, VerilogSectionReplacementString=sT16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Timer_v2_70, CY_CONFIG_TITLE=PACER_TIMER, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PACER_TIMER, CY_INSTANCE_SHORT_NAME=PACER_TIMER, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=70, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=PACER_TIMER, )
module Timer_v2_70_0 (
    capture,
    capture_out,
    clock,
    enable,
    interrupt,
    reset,
    tc,
    trigger);
    input       capture;
    output      capture_out;
    input       clock;
    input       enable;
    output      interrupt;
    input       reset;
    output      tc;
    input       trigger;

    parameter CaptureCount = 2;
    parameter CaptureCounterEnabled = 0;
    parameter DeviceFamily = "PSoC5";
    parameter InterruptOnCapture = 0;
    parameter InterruptOnTC = 0;
    parameter Resolution = 16;
    parameter SiliconRevision = "0";

          wire  Net_260;
          wire  Net_261;
          wire  Net_266;
          wire  Net_102;
          wire  Net_55;
          wire  Net_57;
          wire  Net_53;
          wire  Net_51;

    cy_psoc3_timer_v1_0 TimerHW (
        .capture(capture),
        .clock(clock),
        .compare(Net_261),
        .enable(Net_266),
        .interrupt(Net_57),
        .kill(Net_260),
        .tc(Net_51),
        .timer_reset(reset));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_260));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign interrupt = Net_57;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign tc = Net_51;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_266 = Net_102;



endmodule

// Component: CyStatusReg_v1_90
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90\CyStatusReg_v1_90.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90\CyStatusReg_v1_90.v"
`endif

// Timer_v2_70(CaptureAlternatingFall=false, CaptureAlternatingRise=false, CaptureCount=2, CaptureCounterEnabled=false, CaptureInputEnabled=false, CaptureMode=0, CONTROL3=1, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeviceFamily=PSoC5, EnableMode=0, FF16=true, FF8=false, FixedFunction=true, FixedFunctionUsed=1, HWCaptureCounterEnabled=false, InterruptOnCapture=false, InterruptOnFIFOFull=false, InterruptOnTC=false, IntOnCapture=0, IntOnFIFOFull=0, IntOnTC=0, NumberOfCaptures=1, param45=1, Period=65535, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=rstSts, RunMode=0, SiliconRevision=0, SoftwareCaptureModeEnabled=false, SoftwareTriggerModeEnabled=false, TriggerInputEnabled=false, TriggerMode=0, UDB16=false, UDB24=false, UDB32=false, UDB8=false, UDBControlReg=false, UsesHWEnable=0, VerilogSectionReplacementString=sT16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Timer_v2_70, CY_CONFIG_TITLE=MY_TIMER, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=MY_TIMER, CY_INSTANCE_SHORT_NAME=MY_TIMER, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=70, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=MY_TIMER, )
module Timer_v2_70_1 (
    capture,
    capture_out,
    clock,
    enable,
    interrupt,
    reset,
    tc,
    trigger);
    input       capture;
    output      capture_out;
    input       clock;
    input       enable;
    output      interrupt;
    input       reset;
    output      tc;
    input       trigger;

    parameter CaptureCount = 2;
    parameter CaptureCounterEnabled = 0;
    parameter DeviceFamily = "PSoC5";
    parameter InterruptOnCapture = 0;
    parameter InterruptOnTC = 0;
    parameter Resolution = 16;
    parameter SiliconRevision = "0";

          wire  Net_260;
          wire  Net_261;
          wire  Net_266;
          wire  Net_102;
          wire  Net_55;
          wire  Net_57;
          wire  Net_53;
          wire  Net_51;

    cy_psoc3_timer_v1_0 TimerHW (
        .capture(capture),
        .clock(clock),
        .compare(Net_261),
        .enable(Net_266),
        .interrupt(Net_57),
        .kill(Net_260),
        .tc(Net_51),
        .timer_reset(reset));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_260));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign interrupt = Net_57;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign tc = Net_51;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_266 = Net_102;



endmodule

// Component: B_UART_v2_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`endif

// UART_v2_50(Address1=2, Address2=0, BaudRate=460800, BreakBitsRX=12, BreakBitsTX=12, BreakDetect=true, CRCoutputsEn=false, Enable_RX=1, Enable_RXIntInterrupt=1, Enable_TX=1, Enable_TXIntInterrupt=0, EnableHWAddress=0, EnIntRXInterrupt=true, EnIntTXInterrupt=false, FlowControl=0, HalfDuplexEn=false, HwTXEnSignal=true, InternalClock=false, InternalClockToleranceMinus=5.25315789473684, InternalClockTolerancePlus=3.93736842105263, InternalClockUsed=0, InterruptOnAddDetect=0, InterruptOnAddressMatch=0, InterruptOnBreak=0, InterruptOnByteRcvd=1, InterruptOnOverrunError=0, InterruptOnParityError=0, InterruptOnStopError=0, InterruptOnTXComplete=false, InterruptOnTXFifoEmpty=false, InterruptOnTXFifoFull=false, InterruptOnTXFifoNotFull=false, IntOnAddressDetect=false, IntOnAddressMatch=false, IntOnBreak=false, IntOnByteRcvd=true, IntOnOverrunError=false, IntOnParityError=false, IntOnStopError=false, NumDataBits=8, NumStopBits=1, OverSamplingRate=8, ParityType=0, ParityTypeSw=false, RequiredClock=3686400, RXAddressMode=0, RXBufferSize=32, RxBuffRegSizeReplacementString=uint8, RXEnable=true, TXBitClkGenDP=true, TXBufferSize=4, TxBuffRegSizeReplacementString=uint8, TXEnable=true, Use23Polling=false, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=UART_v2_50, CY_CONFIG_TITLE=UART_RS485, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=UART_RS485, CY_INSTANCE_SHORT_NAME=UART_RS485, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=50, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=UART_RS485, )
module UART_v2_50_2 (
    clock,
    cts_n,
    reset,
    rts_n,
    rx,
    rx_clk,
    rx_data,
    rx_interrupt,
    tx,
    tx_clk,
    tx_data,
    tx_en,
    tx_interrupt);
    input       clock;
    input       cts_n;
    input       reset;
    output      rts_n;
    input       rx;
    output      rx_clk;
    output      rx_data;
    output      rx_interrupt;
    output      tx;
    output      tx_clk;
    output      tx_data;
    output      tx_en;
    output      tx_interrupt;

    parameter Address1 = 2;
    parameter Address2 = 0;
    parameter EnIntRXInterrupt = 1;
    parameter EnIntTXInterrupt = 0;
    parameter FlowControl = 0;
    parameter HalfDuplexEn = 0;
    parameter HwTXEnSignal = 1;
    parameter NumDataBits = 8;
    parameter NumStopBits = 1;
    parameter ParityType = 0;
    parameter RXEnable = 1;
    parameter TXEnable = 1;

          wire  Net_289;
          wire  Net_61;
          wire  Net_9;


	cy_isr_v1_0
		#(.int_type(2'b10))
		RXInternalInterrupt
		 (.int_signal(rx_interrupt));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_61 = clock;

    B_UART_v2_50 BUART (
        .clock(Net_61),
        .cts_n(cts_n),
        .reset(reset),
        .rts_n(rts_n),
        .rx(rx),
        .rx_clk(rx_clk),
        .rx_data(rx_data),
        .rx_interrupt(rx_interrupt),
        .tx(tx),
        .tx_clk(tx_clk),
        .tx_data(tx_data),
        .tx_en(tx_en),
        .tx_interrupt(tx_interrupt));
    defparam BUART.Address1 = 2;
    defparam BUART.Address2 = 0;
    defparam BUART.BreakBitsRX = 12;
    defparam BUART.BreakBitsTX = 12;
    defparam BUART.BreakDetect = 1;
    defparam BUART.CRCoutputsEn = 0;
    defparam BUART.FlowControl = 0;
    defparam BUART.HalfDuplexEn = 0;
    defparam BUART.HwTXEnSignal = 1;
    defparam BUART.NumDataBits = 8;
    defparam BUART.NumStopBits = 1;
    defparam BUART.OverSampleCount = 8;
    defparam BUART.ParityType = 0;
    defparam BUART.ParityTypeSw = 0;
    defparam BUART.RXAddressMode = 0;
    defparam BUART.RXEnable = 1;
    defparam BUART.RXStatusIntEnable = 1;
    defparam BUART.TXBitClkGenDP = 1;
    defparam BUART.TXEnable = 1;
    defparam BUART.Use23Polling = 0;



endmodule

// Timer_v2_70(CaptureAlternatingFall=false, CaptureAlternatingRise=false, CaptureCount=2, CaptureCounterEnabled=false, CaptureInputEnabled=false, CaptureMode=0, CONTROL3=1, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeviceFamily=PSoC5, EnableMode=0, FF16=true, FF8=false, FixedFunction=true, FixedFunctionUsed=1, HWCaptureCounterEnabled=false, InterruptOnCapture=false, InterruptOnFIFOFull=false, InterruptOnTC=true, IntOnCapture=0, IntOnFIFOFull=0, IntOnTC=1, NumberOfCaptures=1, param45=1, Period=5999, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=rstSts, RunMode=0, SiliconRevision=0, SoftwareCaptureModeEnabled=false, SoftwareTriggerModeEnabled=false, TriggerInputEnabled=false, TriggerMode=0, UDB16=false, UDB24=false, UDB32=false, UDB8=false, UDBControlReg=false, UsesHWEnable=0, VerilogSectionReplacementString=sT16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Timer_v2_70, CY_CONFIG_TITLE=CYCLES_TIMER, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=CYCLES_TIMER, CY_INSTANCE_SHORT_NAME=CYCLES_TIMER, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=70, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=CYCLES_TIMER, )
module Timer_v2_70_3 (
    capture,
    capture_out,
    clock,
    enable,
    interrupt,
    reset,
    tc,
    trigger);
    input       capture;
    output      capture_out;
    input       clock;
    input       enable;
    output      interrupt;
    input       reset;
    output      tc;
    input       trigger;

    parameter CaptureCount = 2;
    parameter CaptureCounterEnabled = 0;
    parameter DeviceFamily = "PSoC5";
    parameter InterruptOnCapture = 0;
    parameter InterruptOnTC = 1;
    parameter Resolution = 16;
    parameter SiliconRevision = "0";

          wire  Net_260;
          wire  Net_261;
          wire  Net_266;
          wire  Net_102;
          wire  Net_55;
          wire  Net_57;
          wire  Net_53;
          wire  Net_51;

    cy_psoc3_timer_v1_0 TimerHW (
        .capture(capture),
        .clock(clock),
        .compare(Net_261),
        .enable(Net_266),
        .interrupt(Net_57),
        .kill(Net_260),
        .tc(Net_51),
        .timer_reset(reset));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_260));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign interrupt = Net_57;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign tc = Net_51;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_266 = Net_102;



endmodule

// Component: B_SPI_Master_v2_40
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_SPI_Master_v2_40"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_SPI_Master_v2_40\B_SPI_Master_v2_40.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_SPI_Master_v2_40"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_SPI_Master_v2_40\B_SPI_Master_v2_40.v"
`endif

// SPI_Master_v2_40(BidirectMode=false, ClockInternal=false, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DesiredBitRate=1000000, HighSpeedMode=true, InternalClockUsed=0, InternalInterruptEnabled=0, InternalRxInterruptEnabled=0, InternalTxInterruptEnabled=0, InterruptOnByteComplete=false, InterruptOnRXFull=false, InterruptOnRXNotEmpty=false, InterruptOnRXOverrun=false, InterruptOnSPIDone=false, InterruptOnSPIIdle=false, InterruptOnTXEmpty=false, InterruptOnTXNotFull=false, IntOnByteComp=0, IntOnRXFull=0, IntOnRXNotEmpty=0, IntOnRXOver=0, IntOnSPIDone=0, IntOnSPIIdle=0, IntOnTXEmpty=0, IntOnTXNotFull=0, Mode=1, ModeUseZero=1, NumberOfDataBits=8, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, RxBufferSize=4, ShiftDir=0, TxBufferSize=4, UseInternalInterrupt=false, UseRxInternalInterrupt=false, UseTxInternalInterrupt=false, VerilogSectionReplacementString=sR8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=SPI_Master_v2_40, CY_CONFIG_TITLE=SPI0, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=SD:SPI0, CY_INSTANCE_SHORT_NAME=SPI0, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=40, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=SD_SPI0, )
module SPI_Master_v2_40_4 (
    clock,
    miso,
    mosi,
    reset,
    rx_interrupt,
    sclk,
    sdat,
    ss,
    tx_interrupt);
    input       clock;
    input       miso;
    output      mosi;
    input       reset;
    output      rx_interrupt;
    output      sclk;
    inout       sdat;
    output      ss;
    output      tx_interrupt;

    parameter BidirectMode = 0;
    parameter HighSpeedMode = 1;
    parameter NumberOfDataBits = 8;
    parameter ShiftDir = 0;

          wire  Net_257;
          wire  Net_273;
          wire  Net_274;
          wire  Net_244;
          wire  Net_239;
          wire  Net_253;
          wire  Net_161;
          wire  Net_276;

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_276 = clock;

    B_SPI_Master_v2_40 BSPIM (
        .clock(Net_276),
        .miso(Net_244),
        .mosi(mosi),
        .reset(Net_273),
        .rx_interpt(rx_interrupt),
        .sclk(sclk),
        .ss(ss),
        .tx_enable(Net_253),
        .tx_interpt(tx_interrupt));
    defparam BSPIM.BidirectMode = 0;
    defparam BSPIM.HighSpeedMode = 1;
    defparam BSPIM.ModeCPHA = 0;
    defparam BSPIM.ModePOL = 0;
    defparam BSPIM.NumberOfDataBits = 8;
    defparam BSPIM.ShiftDir = 0;

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign Net_244 = miso;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign Net_273 = Net_274;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_274));



endmodule

// emFile_v1_20(Max_SPI_Frequency=4000, NumberSDCards=1, WP0_En=false, WP1_En=false, WP2_En=false, WP3_En=false, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=emFile_v1_20, CY_CONFIG_TITLE=SD, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=SD, CY_INSTANCE_SHORT_NAME=SD, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=20, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=SD, )
module emFile_v1_20_5 ;


          wire  Net_31;
          wire  Net_30;
          wire  Net_26;
          wire  Net_29;
          wire  Net_28;
          wire  Net_27;
          wire  Net_24;
          wire  Net_23;
          wire  Net_17;
          wire  Net_21;
          wire  Net_20;
          wire  Net_18;
          wire  Net_14;
          wire  Net_13;
          wire  Net_8;
          wire  Net_12;
          wire  Net_11;
          wire  Net_9;
          wire  Net_6;
          wire  Net_5;
          wire  Net_1;
          wire  Net_4;
          wire  Net_3;
          wire  Net_2;
          wire  Net_58;
          wire  Net_57;
          wire  Net_55;
          wire  Net_54;
          wire  Net_43;
          wire  Net_42;
          wire  Net_40;
          wire  Net_39;
          wire  Net_83;
          wire  Net_81;
          wire  Net_80;
          wire  Net_66;
          wire  Net_19;
          wire  Net_16;
          wire  Net_22;
          wire  Net_10;

    SPI_Master_v2_40_4 SPI0 (
        .clock(Net_19),
        .miso(Net_16),
        .mosi(Net_10),
        .reset(Net_2),
        .rx_interrupt(Net_3),
        .sclk(Net_22),
        .sdat(Net_4),
        .ss(Net_1),
        .tx_interrupt(Net_5));
    defparam SPI0.BidirectMode = 0;
    defparam SPI0.HighSpeedMode = 1;
    defparam SPI0.NumberOfDataBits = 8;
    defparam SPI0.ShiftDir = 0;

	wire [0:0] tmpOE__mosi0_net;
	wire [0:0] tmpFB_0__mosi0_net;
	wire [0:0] tmpIO_0__mosi0_net;
	wire [0:0] tmpINTERRUPT_0__mosi0_net;
	electrical [0:0] tmpSIOVREF__mosi0_net;

	cy_psoc3_pins_v1_10
		#(.id("3537ae03-95e4-4c84-8be5-5c34ee791d4f/ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		mosi0
		 (.oe(tmpOE__mosi0_net),
		  .y({Net_10}),
		  .fb({tmpFB_0__mosi0_net[0:0]}),
		  .io({tmpIO_0__mosi0_net[0:0]}),
		  .siovref(tmpSIOVREF__mosi0_net),
		  .interrupt({tmpINTERRUPT_0__mosi0_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__mosi0_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("3537ae03-95e4-4c84-8be5-5c34ee791d4f/5ed615c6-e1f0-40ed-8816-f906ef67d531"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(1),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_19));


	wire [0:0] tmpOE__miso0_net;
	wire [0:0] tmpIO_0__miso0_net;
	wire [0:0] tmpINTERRUPT_0__miso0_net;
	electrical [0:0] tmpSIOVREF__miso0_net;

	cy_psoc3_pins_v1_10
		#(.id("3537ae03-95e4-4c84-8be5-5c34ee791d4f/1425177d-0d0e-4468-8bcc-e638e5509a9b"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1))
		miso0
		 (.oe(tmpOE__miso0_net),
		  .y({1'b0}),
		  .fb({Net_16}),
		  .io({tmpIO_0__miso0_net[0:0]}),
		  .siovref(tmpSIOVREF__miso0_net),
		  .interrupt({tmpINTERRUPT_0__miso0_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__miso0_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_2));

	wire [0:0] tmpOE__sclk0_net;
	wire [0:0] tmpFB_0__sclk0_net;
	wire [0:0] tmpIO_0__sclk0_net;
	wire [0:0] tmpINTERRUPT_0__sclk0_net;
	electrical [0:0] tmpSIOVREF__sclk0_net;

	cy_psoc3_pins_v1_10
		#(.id("3537ae03-95e4-4c84-8be5-5c34ee791d4f/ae249072-87dc-41aa-9405-888517aefa28"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		sclk0
		 (.oe(tmpOE__sclk0_net),
		  .y({Net_22}),
		  .fb({tmpFB_0__sclk0_net[0:0]}),
		  .io({tmpIO_0__sclk0_net[0:0]}),
		  .siovref(tmpSIOVREF__sclk0_net),
		  .interrupt({tmpINTERRUPT_0__sclk0_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__sclk0_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__SPI0_CS_net;
	wire [0:0] tmpFB_0__SPI0_CS_net;
	wire [0:0] tmpIO_0__SPI0_CS_net;
	wire [0:0] tmpINTERRUPT_0__SPI0_CS_net;
	electrical [0:0] tmpSIOVREF__SPI0_CS_net;

	cy_psoc3_pins_v1_10
		#(.id("3537ae03-95e4-4c84-8be5-5c34ee791d4f/6df85302-e45f-45fb-97de-4bdf3128e07b"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b0),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1))
		SPI0_CS
		 (.oe(tmpOE__SPI0_CS_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__SPI0_CS_net[0:0]}),
		  .io({tmpIO_0__SPI0_CS_net[0:0]}),
		  .siovref(tmpSIOVREF__SPI0_CS_net),
		  .interrupt({tmpINTERRUPT_0__SPI0_CS_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__SPI0_CS_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};



endmodule

// Component: not_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\not_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\not_v1_0\not_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\not_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\not_v1_0\not_v1_0.v"
`endif

// Component: B_PWM_v3_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`endif

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=true, Compare1_8=false, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=2, CompareType1Software=0, CompareType2=2, CompareType2Software=0, CompareValue1=499, CompareValue2=0, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=1, EnableMode=2, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=999, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=true, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=true, UDB8=false, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=BLINK_05HZ, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=BLINK_05HZ, CY_INSTANCE_SHORT_NAME=BLINK_05HZ, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=BLINK_05HZ, )
module PWM_v3_30_6 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 16;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 2;
    defparam PWMUDB.CompareType2 = 2;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 1;
    defparam PWMUDB.EnableMode = 2;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 0;
    defparam PWMUDB.Resolution = 16;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=true, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=2, CompareType1Software=0, CompareType2=2, CompareType2Software=0, CompareValue1=99, CompareValue2=0, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=1, EnableMode=2, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=199, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, Resolution=8, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=true, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=true, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=BLINK_25HZ, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=BLINK_25HZ, CY_INSTANCE_SHORT_NAME=BLINK_25HZ, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=BLINK_25HZ, )
module PWM_v3_30_7 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 8;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 2;
    defparam PWMUDB.CompareType2 = 2;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 1;
    defparam PWMUDB.EnableMode = 2;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 0;
    defparam PWMUDB.Resolution = 8;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// Component: BasicCounter_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0\BasicCounter_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\BasicCounter_v1_0\BasicCounter_v1_0.v"
`endif

// Component: cy_vref_v1_60
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_60"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_60\cy_vref_v1_60.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_60"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_60\cy_vref_v1_60.v"
`endif

// Component: cy_analog_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`endif

// Component: AMux_v1_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80\AMux_v1_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80\AMux_v1_80.v"
`endif

// ADC_DelSig_v3_20(ADC_Alignment=0, ADC_Alignment_Config2=0, ADC_Alignment_Config3=0, ADC_Alignment_Config4=0, ADC_Charge_Pump_Clock=true, ADC_Clock=1, ADC_CLOCK_FREQUENCY=2199900, ADC_Input_Mode=1, ADC_Input_Range=2, ADC_Input_Range_Config2=0, ADC_Input_Range_Config3=0, ADC_Input_Range_Config4=0, ADC_Power=1, ADC_Reference=5, ADC_Reference_Config2=0, ADC_Reference_Config3=0, ADC_Reference_Config4=0, ADC_Resolution=12, ADC_Resolution_Config2=16, ADC_Resolution_Config3=16, ADC_Resolution_Config4=16, Clock_Frequency=64000, Comment_Config1=Default Config, Comment_Config2=Second Config, Comment_Config3=Third Config, Comment_Config4=Fourth Config, Config1_Name=CFG1, Config2_Name=CFG2, Config3_Name=CFG3, Config4_Name=CFG4, Configs=1, Conversion_Mode=0, Conversion_Mode_Config2=2, Conversion_Mode_Config3=2, Conversion_Mode_Config4=2, Enable_Vref_Vss=false, EnableModulatorInput=false, Input_Buffer_Gain=1, Input_Buffer_Gain_Config2=1, Input_Buffer_Gain_Config3=1, Input_Buffer_Gain_Config4=1, Input_Buffer_Mode=2, Input_Buffer_Mode_Config2=1, Input_Buffer_Mode_Config3=1, Input_Buffer_Mode_Config4=1, Ref_Voltage=1.25, Ref_Voltage_Config2=1.024, Ref_Voltage_Config3=1.024, Ref_Voltage_Config4=1.024, rm_int=false, Sample_Rate=14666, Sample_Rate_Config2=2000, Sample_Rate_Config3=2000, Sample_Rate_Config4=2000, Start_of_Conversion=1, Vdda_Value=5, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=ADC_DelSig_v3_20, CY_CONFIG_TITLE=ADC, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ADC, CY_INSTANCE_SHORT_NAME=ADC, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=20, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=ADC, )
module ADC_DelSig_v3_20_8 (
    aclk,
    eoc,
    mi,
    nVref,
    soc,
    vminus,
    vplus);
    input       aclk;
    output      eoc;
    input       mi;
    inout       nVref;
    electrical  nVref;
    input       soc;
    inout       vminus;
    electrical  vminus;
    inout       vplus;
    electrical  vplus;


          wire  Net_270;
          wire  Net_268;
          wire  Net_252;
          wire  Net_275;
          wire  Net_250;
    electrical  Net_249;
    electrical  Net_257;
    electrical  Net_248;
    electrical  Net_23;
          wire  Net_247;
          wire  aclock;
          wire [3:0] mod_dat;
          wire  mod_reset;
    electrical  Net_352;
          wire  Net_482;
          wire [7:0] Net_245;
          wire  Net_246;
    electrical  Net_34;
    electrical  Net_35;
    electrical  Net_244;
          wire  Net_93;
    electrical  Net_20;
    electrical  Net_690;
    electrical  Net_686;
    electrical  Net_520;
          wire  Net_481;
    electrical  Net_677;
    electrical  Net_41;
    electrical  Net_573;
    electrical  Net_109;
          wire  Net_488;


	cy_vref_v1_0
		#(.guid("15B3DB15-B7B3-4d62-A2DF-25EA392A7161"),
		  .name("Vssa (GND)"),
		  .autoenable(1))
		vRef_2
		 (.vout(Net_244));


	// cy_analog_virtualmux_6 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_6_connect(Net_690, Net_35);
	defparam cy_analog_virtualmux_6_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_34));

	// cy_analog_virtualmux_4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_4_connect(Net_677, Net_34);
	defparam cy_analog_virtualmux_4_connect.sig_width = 1;

    // -- AMux AMux start -- ***
    // -- Mux A --
    
    cy_psoc3_amux_v1_0 AMux(
        .muxin({
            Net_690,
            Net_244
            }),
        .vout(Net_20)
        );
    
    defparam AMux.muxin_width = 2;
    defparam AMux.init_mux_sel = 2'h0;
    defparam AMux.one_active = 0;
    defparam AMux.connect_mode = 1;
    
    // -- AMux AMux end --

    cy_psoc3_ds_mod_v4_0 DSM (
        .aclock(Net_488),
        .clk_udb(1'b0),
        .dec_clock(aclock),
        .dout_udb(Net_245[7:0]),
        .ext_pin_1(Net_573),
        .ext_pin_2(Net_41),
        .ext_vssa(Net_109),
        .extclk_cp_udb(Net_93),
        .mod_dat(mod_dat[3:0]),
        .modbit(Net_481),
        .qtz_ref(Net_677),
        .reset_dec(mod_reset),
        .reset_udb(Net_482),
        .vminus(Net_520),
        .vplus(vplus));
    defparam DSM.resolution = 12;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_5 (
        .noconnect(Net_352));

	// cy_analog_virtualmux_5 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_5_connect(Net_109, Net_352);
	defparam cy_analog_virtualmux_5_connect.sig_width = 1;


	cy_clock_v1_0
		#(.id("b6c86ee5-f19a-4c90-81de-54c953602259/b7604721-db56-4477-98c2-8fae77869066"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(1),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(1))
		Ext_CP_Clk
		 (.clock_out(Net_93));


    cy_analog_noconnect_v1_0 cy_analog_noconnect_3 (
        .noconnect(Net_257));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_249));

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Net_41, Net_257);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_573, Net_249);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_520, Net_20);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;


	cy_isr_v1_0
		#(.int_type(2'b10))
		IRQ
		 (.int_signal(eoc));


	// Clock_VirtualMux (cy_virtualmux_v1_0)
	assign Net_488 = Net_250;


	cy_clock_v1_0
		#(.id("b6c86ee5-f19a-4c90-81de-54c953602259/edd15f43-b66b-457b-be3a-5342345270c8"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(0),
		  .period("454752160.07276"),
		  .is_direct(0),
		  .is_digital(0))
		theACLK
		 (.clock_out(Net_250));


    ZeroTerminal ZeroTerminal_2 (
        .z(Net_482));

	// Clock_VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_481 = Net_252;

    cy_psoc3_decimator_v1_0 DEC (
        .aclock(aclock),
        .ext_start(soc),
        .interrupt(eoc),
        .mod_dat(mod_dat[3:0]),
        .mod_reset(mod_reset));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_252));


    assign Net_268 = Net_270 | Net_93;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_270));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=false, Compare2_16=false, Compare2_8=true, CompareStatusEdgeSense=true, CompareType1=2, CompareType1Software=0, CompareType2=2, CompareType2Software=0, CompareValue1=0, CompareValue2=0, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=1, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=false, Period=100, PWMMode=1, PWMModeCenterAligned=0, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, Resolution=8, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=false, TermVisibility_pwm1=true, TermVisibility_pwm2=true, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=true, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=PWM_MOTORS, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWM_MOTORS, CY_INSTANCE_SHORT_NAME=PWM_MOTORS, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=PWM_MOTORS, )
module PWM_v3_30_9 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 8;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 2;
    defparam PWMUDB.CompareType2 = 2;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 1;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 1;
    defparam PWMUDB.Resolution = 8;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=false, Compare2_16=true, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=1, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=0, CompareValue2=0, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=1, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=false, Period=100, PWMMode=1, PWMModeCenterAligned=0, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=false, TermVisibility_pwm1=true, TermVisibility_pwm2=true, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=true, UDB8=false, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=PWM_VT, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWM_VT, CY_INSTANCE_SHORT_NAME=PWM_VT, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=PWM_VT, )
module PWM_v3_30_10 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 16;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 1;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 1;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 1;
    defparam PWMUDB.Resolution = 16;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// top
module top ;

          wire  Net_10452;
          wire  Net_10384;
          wire  Net_10383;
          wire  Net_10382;
          wire  Net_10381;
          wire  Net_10380;
          wire  Net_10379;
          wire  Net_10378;
          wire  Net_10377;
          wire  Net_10376;
          wire  Net_10375;
          wire  Net_10373;
          wire  Net_10372;
          wire  Net_10371;
          wire  Net_10370;
          wire  Net_10369;
          wire  Net_10368;
          wire  Net_10367;
          wire  Net_10366;
          wire  Net_10365;
          wire  Net_10363;
          wire  Net_10450;
          wire  Net_10449;
          wire  Net_10360;
          wire  Net_10448;
          wire  Net_10447;
          wire  Net_10446;
          wire  Net_10445;
          wire  Net_10444;
          wire  Net_10443;
          wire  Net_10442;
          wire  Net_10441;
          wire  Net_8144;
          wire  Net_8142;
          wire  Net_8141;
          wire  Net_8140;
          wire  Net_8139;
          wire  Net_8137;
          wire  Net_8136;
          wire  Net_8135;
          wire  Net_8143;
          wire  Net_7045;
          wire  Net_7043;
          wire  Net_7042;
          wire  Net_7041;
          wire  Net_7040;
          wire  Net_7038;
          wire  Net_7037;
          wire  Net_7036;
          wire  Net_7039;
          wire  Net_7044;
          wire  Net_10716;
          wire  Net_10715;
          wire  Net_10714;
          wire  Net_10713;
          wire  Net_10712;
          wire  Net_10711;
          wire  Net_10710;
          wire  Net_10709;
          wire  Net_10708;
          wire  Net_10707;
          wire  Net_7001;
          wire  Net_9919;
          wire  Net_2630;
          wire  Net_2628;
          wire  Net_2626;
          wire  Net_2625;
          wire  Net_2624;
          wire  Net_2623;
          wire  Net_2622;
          wire  Net_2621;
          wire  Net_2629;
          wire  Net_2640;
          wire  Net_7947;
    electrical  Net_6751;
    electrical  Net_6753;
          wire  Net_6754;
          wire  Net_6752;
          wire [7:0] Net_6750;
          wire  Net_6748;
          wire  Net_6747;
          wire  Net_6746;
          wire  Net_6745;
          wire  Net_6744;
          wire  Net_6743;
          wire  Net_6742;
          wire  Net_6749;
          wire  Net_7024;
          wire  Net_6740;
          wire  Net_6739;
          wire  Net_6737;
          wire  Net_6736;
          wire  Net_6735;
          wire  Net_6734;
          wire  Net_6733;
          wire  Net_6732;
          wire  Net_6731;
          wire  Net_6738;
          wire  Net_8901;
          wire  Net_8895;
          wire  Net_8897;
          wire  Net_8896;
          wire  Net_8904;
          wire  Net_8903;
          wire  Net_8900;
          wire  Net_8898;
          wire  Net_8902;
          wire  Net_8899;
          wire  Net_7353;
          wire  Net_7352;
          wire  Net_7350;
          wire  Net_7349;
          wire  Net_7348;
          wire  Net_7347;
          wire  Net_7346;
          wire  Net_7345;
          wire  Net_7351;
          wire  Net_7344;
          wire  Net_7342;
          wire  Net_7341;
          wire  Net_7340;
          wire  Net_7339;
          wire  Net_7338;
          wire  Net_7337;
          wire  Net_7343;
          wire  Net_8891;
          wire  Net_8885;
          wire  Net_7326;
          wire  Net_8887;
          wire  Net_8886;
          wire  Net_8894;
          wire  Net_8893;
          wire  Net_8890;
          wire  Net_8888;
          wire  Net_8892;
          wire  Net_8889;
          wire  Net_7325;
          wire  Net_2799;
          wire  Net_2797;
          wire  Net_2796;
          wire  Net_2795;
          wire  Net_2794;
          wire  Net_2793;
          wire  Net_2792;
          wire  Net_10322;
          wire  Net_2798;
          wire  Net_9774;
          wire  Net_9776;
          wire  Net_3025;
          wire  Net_7002;
          wire  Net_3876;
          wire  Net_3872;
          wire  Net_3874;
          wire  Net_3875;
          wire  Net_3878;
          wire  Net_3877;
          wire  Net_1385;
          wire  Net_333;
          wire  Net_334;
          wire  Net_335;
          wire  Net_336;
          wire  Net_337;
          wire  Net_331;
          wire  Net_330;
          wire  Net_2752;
          wire  Net_324;
          wire  Net_327;
          wire  Net_322;
          wire  Net_323;
          wire  Net_326;
          wire  Net_325;
          wire [7:0] Net_320;
          wire  Net_318;
          wire  Net_317;
          wire  Net_316;
          wire  Net_315;
          wire  Net_314;
          wire  Net_313;
          wire  Net_312;
          wire  Net_319;
          wire  Net_311;
          wire  Net_309;
          wire  Net_308;
          wire  Net_307;
          wire  Net_306;
          wire  Net_305;
          wire  Net_304;
          wire  Net_303;
          wire  Net_310;
          wire  Net_1383;
          wire  Net_299;
          wire  Net_297;
          wire  Net_298;
          wire  Net_301;
          wire  Net_300;
          wire  Net_3036;
          wire  Net_3034;
          wire  Net_3033;
          wire  Net_3032;
          wire  Net_3031;
          wire  Net_3029;
          wire  Net_3028;
          wire  Net_3027;
          wire  Net_3035;
          wire  Net_10474;
          wire  Net_10473;
          wire  Net_10472;
          wire  Net_10471;
          wire  Net_10470;
          wire  Net_10469;
          wire  Net_10468;
          wire  Net_10466;
          wire  Net_9749;
          wire  Net_9759;
          wire  Net_9767;
          wire  Net_10332;
          wire  Net_10330;
          wire  Net_10329;
          wire  Net_10328;
          wire  Net_10327;
          wire  Net_10325;
          wire  Net_10324;
          wire  Net_10323;
          wire  Net_10331;
          wire  Net_10343;
    electrical  Net_6730;
          wire  Net_6729;
          wire  Net_6728;
    electrical  Net_6727;
    electrical  Net_6726;
    electrical  Net_6718;
    electrical  Net_6719;
    electrical  Net_6716;
    electrical  Net_6717;
    electrical  Net_6725;
    electrical  Net_6724;
    electrical  Net_6723;
    electrical  Net_6722;
    electrical  Net_6721;
    electrical  Net_6720;
          wire  Net_10313;
          wire  Net_10337;
          wire  Net_2334;
          wire  Net_10233;
          wire  Net_9770;
          wire  Net_9765;
          wire  Net_9761;
          wire  Net_10264;
          wire  Net_9745;
          wire  Net_9990;
          wire  Net_3021;
          wire  Net_9969;
          wire  Net_2982;
          wire  Net_10350;
          wire  Net_10661;
          wire  Net_10660;
          wire  Net_10659;
          wire  Net_10658;
          wire  Net_10359;
          wire  Net_10374;
          wire  Net_10358;
          wire  Net_10364;
          wire  Net_4387;
          wire  Net_7450;
          wire  Net_7694;
          wire  Net_5930;
          wire  Net_3925;
          wire  Net_7667;
          wire  Net_6987;
          wire  Net_7185;
          wire  Net_5579;
          wire [3:0] Net_7046;
          wire  Net_5460;
          wire  Net_5205;
          wire  Net_2835;
          wire  Net_4627;
          wire  Net_2836;
          wire [3:0] Net_5190;
          wire  Net_5118;
          wire  Net_5290;
          wire  Net_5442;
          wire  Net_4386;
          wire  Net_3249;
          wire  Net_345;
          wire  Net_2711;
          wire  Net_2627;
          wire  Net_6196;
          wire  Net_6117;
          wire  Net_6020;
          wire  Net_332;
          wire  Net_124;
          wire  Net_3334;
          wire  Net_3328;
          wire  Net_3264;
          wire  Net_3018;
          wire  Net_3240;

	wire [0:0] tmpOE__CURRENT_SENSE_2_net;
	wire [0:0] tmpFB_0__CURRENT_SENSE_2_net;
	wire [0:0] tmpIO_0__CURRENT_SENSE_2_net;
	wire [0:0] tmpINTERRUPT_0__CURRENT_SENSE_2_net;
	electrical [0:0] tmpSIOVREF__CURRENT_SENSE_2_net;

	cy_psoc3_pins_v1_10
		#(.id("cf40d4c6-577e-43fd-aaba-a74445905ab0"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		CURRENT_SENSE_2
		 (.oe(tmpOE__CURRENT_SENSE_2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__CURRENT_SENSE_2_net[0:0]}),
		  .analog({Net_6720}),
		  .io({tmpIO_0__CURRENT_SENSE_2_net[0:0]}),
		  .siovref(tmpSIOVREF__CURRENT_SENSE_2_net),
		  .interrupt({tmpINTERRUPT_0__CURRENT_SENSE_2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__CURRENT_SENSE_2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__VOLTAGE_SENSE_2_net;
	wire [0:0] tmpFB_0__VOLTAGE_SENSE_2_net;
	wire [0:0] tmpIO_0__VOLTAGE_SENSE_2_net;
	wire [0:0] tmpINTERRUPT_0__VOLTAGE_SENSE_2_net;
	electrical [0:0] tmpSIOVREF__VOLTAGE_SENSE_2_net;

	cy_psoc3_pins_v1_10
		#(.id("575430a4-8a3f-4c8d-b700-956ac3121f37"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		VOLTAGE_SENSE_2
		 (.oe(tmpOE__VOLTAGE_SENSE_2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__VOLTAGE_SENSE_2_net[0:0]}),
		  .analog({Net_6721}),
		  .io({tmpIO_0__VOLTAGE_SENSE_2_net[0:0]}),
		  .siovref(tmpSIOVREF__VOLTAGE_SENSE_2_net),
		  .interrupt({tmpINTERRUPT_0__VOLTAGE_SENSE_2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__VOLTAGE_SENSE_2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__EMG_6_net;
	wire [0:0] tmpFB_0__EMG_6_net;
	wire [0:0] tmpIO_0__EMG_6_net;
	wire [0:0] tmpINTERRUPT_0__EMG_6_net;
	electrical [0:0] tmpSIOVREF__EMG_6_net;

	cy_psoc3_pins_v1_10
		#(.id("a87ba707-cce4-4c08-8e8b-3e989cfba7aa"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		EMG_6
		 (.oe(tmpOE__EMG_6_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__EMG_6_net[0:0]}),
		  .analog({Net_6722}),
		  .io({tmpIO_0__EMG_6_net[0:0]}),
		  .siovref(tmpSIOVREF__EMG_6_net),
		  .interrupt({tmpINTERRUPT_0__EMG_6_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__EMG_6_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__EMG_5_net;
	wire [0:0] tmpFB_0__EMG_5_net;
	wire [0:0] tmpIO_0__EMG_5_net;
	wire [0:0] tmpINTERRUPT_0__EMG_5_net;
	electrical [0:0] tmpSIOVREF__EMG_5_net;

	cy_psoc3_pins_v1_10
		#(.id("25c65768-4916-45eb-8f51-ffa38a63f902"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		EMG_5
		 (.oe(tmpOE__EMG_5_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__EMG_5_net[0:0]}),
		  .analog({Net_6723}),
		  .io({tmpIO_0__EMG_5_net[0:0]}),
		  .siovref(tmpSIOVREF__EMG_5_net),
		  .interrupt({tmpINTERRUPT_0__EMG_5_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__EMG_5_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__EMG_4_net;
	wire [0:0] tmpFB_0__EMG_4_net;
	wire [0:0] tmpIO_0__EMG_4_net;
	wire [0:0] tmpINTERRUPT_0__EMG_4_net;
	electrical [0:0] tmpSIOVREF__EMG_4_net;

	cy_psoc3_pins_v1_10
		#(.id("6463c433-b620-4259-b362-c1b91cb4cb79"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		EMG_4
		 (.oe(tmpOE__EMG_4_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__EMG_4_net[0:0]}),
		  .analog({Net_6724}),
		  .io({tmpIO_0__EMG_4_net[0:0]}),
		  .siovref(tmpSIOVREF__EMG_4_net),
		  .interrupt({tmpINTERRUPT_0__EMG_4_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__EMG_4_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__EMG_3_net;
	wire [0:0] tmpFB_0__EMG_3_net;
	wire [0:0] tmpIO_0__EMG_3_net;
	wire [0:0] tmpINTERRUPT_0__EMG_3_net;
	electrical [0:0] tmpSIOVREF__EMG_3_net;

	cy_psoc3_pins_v1_10
		#(.id("041a7470-dfe4-408a-bfbd-d968909b561a"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		EMG_3
		 (.oe(tmpOE__EMG_3_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__EMG_3_net[0:0]}),
		  .analog({Net_6725}),
		  .io({tmpIO_0__EMG_3_net[0:0]}),
		  .siovref(tmpSIOVREF__EMG_3_net),
		  .interrupt({tmpINTERRUPT_0__EMG_3_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__EMG_3_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__EMG_1_net;
	wire [0:0] tmpFB_0__EMG_1_net;
	wire [0:0] tmpIO_0__EMG_1_net;
	wire [0:0] tmpINTERRUPT_0__EMG_1_net;
	electrical [0:0] tmpSIOVREF__EMG_1_net;

	cy_psoc3_pins_v1_10
		#(.id("1ddf9c54-2e89-40fe-98b3-4a46d4fffe2a"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		EMG_1
		 (.oe(tmpOE__EMG_1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__EMG_1_net[0:0]}),
		  .analog({Net_6717}),
		  .io({tmpIO_0__EMG_1_net[0:0]}),
		  .siovref(tmpSIOVREF__EMG_1_net),
		  .interrupt({tmpINTERRUPT_0__EMG_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__EMG_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__EMG_2_net;
	wire [0:0] tmpFB_0__EMG_2_net;
	wire [0:0] tmpIO_0__EMG_2_net;
	wire [0:0] tmpINTERRUPT_0__EMG_2_net;
	electrical [0:0] tmpSIOVREF__EMG_2_net;

	cy_psoc3_pins_v1_10
		#(.id("ea7993ca-43f7-4882-934e-1b33504cc372"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		EMG_2
		 (.oe(tmpOE__EMG_2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__EMG_2_net[0:0]}),
		  .analog({Net_6716}),
		  .io({tmpIO_0__EMG_2_net[0:0]}),
		  .siovref(tmpSIOVREF__EMG_2_net),
		  .interrupt({tmpINTERRUPT_0__EMG_2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__EMG_2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__PRESSURE_SENSOR_net;
	wire [0:0] tmpFB_0__PRESSURE_SENSOR_net;
	wire [0:0] tmpIO_0__PRESSURE_SENSOR_net;
	wire [0:0] tmpINTERRUPT_0__PRESSURE_SENSOR_net;
	electrical [0:0] tmpSIOVREF__PRESSURE_SENSOR_net;

	cy_psoc3_pins_v1_10
		#(.id("05a9c8de-3ba2-4909-8250-95fdc61c0bf4"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		PRESSURE_SENSOR
		 (.oe(tmpOE__PRESSURE_SENSOR_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__PRESSURE_SENSOR_net[0:0]}),
		  .analog({Net_6719}),
		  .io({tmpIO_0__PRESSURE_SENSOR_net[0:0]}),
		  .siovref(tmpSIOVREF__PRESSURE_SENSOR_net),
		  .interrupt({tmpINTERRUPT_0__PRESSURE_SENSOR_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__PRESSURE_SENSOR_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__MASTER_MODE_VOLTAGE_net;
	wire [0:0] tmpFB_0__MASTER_MODE_VOLTAGE_net;
	wire [0:0] tmpIO_0__MASTER_MODE_VOLTAGE_net;
	wire [0:0] tmpINTERRUPT_0__MASTER_MODE_VOLTAGE_net;
	electrical [0:0] tmpSIOVREF__MASTER_MODE_VOLTAGE_net;

	cy_psoc3_pins_v1_10
		#(.id("7bc8296e-0925-4c45-bc42-d5d2c24c1efd"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MASTER_MODE_VOLTAGE
		 (.oe(tmpOE__MASTER_MODE_VOLTAGE_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__MASTER_MODE_VOLTAGE_net[0:0]}),
		  .analog({Net_6718}),
		  .io({tmpIO_0__MASTER_MODE_VOLTAGE_net[0:0]}),
		  .siovref(tmpSIOVREF__MASTER_MODE_VOLTAGE_net),
		  .interrupt({tmpINTERRUPT_0__MASTER_MODE_VOLTAGE_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MASTER_MODE_VOLTAGE_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__EMG_B_net;
	wire [0:0] tmpFB_0__EMG_B_net;
	wire [0:0] tmpIO_0__EMG_B_net;
	wire [0:0] tmpINTERRUPT_0__EMG_B_net;
	electrical [0:0] tmpSIOVREF__EMG_B_net;

	cy_psoc3_pins_v1_10
		#(.id("a014e3ff-1a80-46b9-bbcb-22ceb5400b46"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		EMG_B
		 (.oe(tmpOE__EMG_B_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__EMG_B_net[0:0]}),
		  .analog({Net_6726}),
		  .io({tmpIO_0__EMG_B_net[0:0]}),
		  .siovref(tmpSIOVREF__EMG_B_net),
		  .interrupt({tmpINTERRUPT_0__EMG_B_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__EMG_B_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__EMG_A_net;
	wire [0:0] tmpFB_0__EMG_A_net;
	wire [0:0] tmpIO_0__EMG_A_net;
	wire [0:0] tmpINTERRUPT_0__EMG_A_net;
	electrical [0:0] tmpSIOVREF__EMG_A_net;

	cy_psoc3_pins_v1_10
		#(.id("d2b73a47-2288-411e-8c5b-d740ba0840ec"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		EMG_A
		 (.oe(tmpOE__EMG_A_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__EMG_A_net[0:0]}),
		  .analog({Net_6727}),
		  .io({tmpIO_0__EMG_A_net[0:0]}),
		  .siovref(tmpSIOVREF__EMG_A_net),
		  .interrupt({tmpINTERRUPT_0__EMG_A_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__EMG_A_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_6728 = Net_2835 & Net_5205;


    assign Net_6729 = Net_4627 | Net_6728;

    // -- SRFF Start --
    reg  cy_srff_3;
    always @(posedge Net_5442)
    begin
        cy_srff_3 <= (Net_4627 | Net_5205) & ~Net_5460;
    end
    assign Net_5205 = cy_srff_3;
    // -- SRFF End --

    // -- SRFF Start --
    reg  cy_srff_2;
    always @(posedge Net_5442)
    begin
        cy_srff_2 <= (Net_6729 | Net_2836) & ~Net_2835;
    end
    assign Net_2836 = cy_srff_2;
    // -- SRFF End --

    cy_sync_v1_0 Sync_ADC (
        .clock(Net_5442),
        .s_in(Net_5118),
        .s_out(Net_2835));
    defparam Sync_ADC.SignalWidth = 1;

    // -- AMuxHw AMuxHw start -- ***
    
    // -- AMuxHw Decoder Start--
    
    reg [11:0] AMuxHw_Decoder_one_hot;
    reg [3:0] AMuxHw_Decoder_old_id;
    wire  AMuxHw_Decoder_is_active;
    wire  AMuxHw_Decoder_enable;
    
    assign AMuxHw_Decoder_enable = 1'b1;
    
    genvar AMuxHw_Decoder_i;
    
    assign AMuxHw_Decoder_is_active = (Net_5190[3:0] == AMuxHw_Decoder_old_id) && AMuxHw_Decoder_enable;
    
    always @(posedge Net_5442)
    begin
        AMuxHw_Decoder_old_id = Net_5190[3:0];
    end
    
    generate
        for (AMuxHw_Decoder_i = 0; AMuxHw_Decoder_i < 12; AMuxHw_Decoder_i = AMuxHw_Decoder_i + 1 )
        begin : AMuxHw_OutBit
            always @(posedge Net_5442)
            begin
                AMuxHw_Decoder_one_hot[AMuxHw_Decoder_i] <= (AMuxHw_Decoder_old_id == AMuxHw_Decoder_i) && AMuxHw_Decoder_is_active;
            end
        end
    endgenerate
    
    // -- AMuxHw Decoder End--
    
    // -- AMuxHw Primitive A --
    
    cy_psoc3_amux_v1_0 #(
        .muxin_width(12),
        .hw_control(1),
        .one_active(1),
        .init_mux_sel(12'h0),
        .api_type(2'b10))
        AMuxHw(
        .muxin({
            Net_6722,
            Net_6723,
            Net_6724,
            Net_6725,
            Net_6726,
            Net_6727,
            Net_6720,
            Net_6721,
            Net_6716,
            Net_6717,
            Net_6718,
            Net_6719
            }),
        .hw_ctrl_en(AMuxHw_Decoder_one_hot[11:0]),
        .vout(Net_6730)
        );
    
    // -- AMuxHw AMuxHw end -- ***

	wire [0:0] tmpOE__PUMP_net;
	wire [0:0] tmpFB_0__PUMP_net;
	wire [0:0] tmpIO_0__PUMP_net;
	wire [0:0] tmpINTERRUPT_0__PUMP_net;
	electrical [0:0] tmpSIOVREF__PUMP_net;

	cy_psoc3_pins_v1_10
		#(.id("b0ae0b48-f6fc-451c-ae86-e9b38612f1b5"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(2),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		PUMP
		 (.oe(tmpOE__PUMP_net),
		  .y({Net_10343}),
		  .fb({tmpFB_0__PUMP_net[0:0]}),
		  .io({tmpIO_0__PUMP_net[0:0]}),
		  .siovref(tmpSIOVREF__PUMP_net),
		  .interrupt({tmpINTERRUPT_0__PUMP_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__PUMP_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    CyControlReg_v1_80 MOTOR_ON_OFF_2 (
        .clock(1'b0),
        .control_0(Net_10313),
        .control_1(Net_10323),
        .control_2(Net_10324),
        .control_3(Net_10325),
        .control_4(Net_10327),
        .control_5(Net_10328),
        .control_6(Net_10329),
        .control_7(Net_10330),
        .reset(1'b0));
    defparam MOTOR_ON_OFF_2.Bit0Mode = 0;
    defparam MOTOR_ON_OFF_2.Bit1Mode = 0;
    defparam MOTOR_ON_OFF_2.Bit2Mode = 0;
    defparam MOTOR_ON_OFF_2.Bit3Mode = 0;
    defparam MOTOR_ON_OFF_2.Bit4Mode = 0;
    defparam MOTOR_ON_OFF_2.Bit5Mode = 0;
    defparam MOTOR_ON_OFF_2.Bit6Mode = 0;
    defparam MOTOR_ON_OFF_2.Bit7Mode = 0;
    defparam MOTOR_ON_OFF_2.BitValue = 0;
    defparam MOTOR_ON_OFF_2.BusDisplay = 0;
    defparam MOTOR_ON_OFF_2.ExtrReset = 0;
    defparam MOTOR_ON_OFF_2.NumOutputs = 1;

    // -- Mux start --
    if (1)
    begin : mux_4
        reg  tmp__mux_4_reg;
        always @(Net_9770 or Net_9969 or Net_10233)
        begin
            case (Net_10233)
                1'b0 :  tmp__mux_4_reg = Net_9770;
                1'b1 :  tmp__mux_4_reg = Net_9969;
            endcase
        end
        assign Net_10343 = tmp__mux_4_reg;
    end
    // -- Mux end --

    // -- Mux start --
    if (1)
    begin : mux_3
        reg  tmp__mux_3_reg;
        always @(Net_9765 or Net_2982 or Net_10233)
        begin
            case (Net_10233)
                1'b0 :  tmp__mux_3_reg = Net_9765;
                1'b1 :  tmp__mux_3_reg = Net_2982;
            endcase
        end
        assign Net_9767 = tmp__mux_3_reg;
    end
    // -- Mux end --

    assign Net_5460 = (Net_5190[3:0] == Net_7046[3:0]);

    // -- Mux start --
    if (1)
    begin : mux_2
        reg  tmp__mux_2_reg;
        always @(Net_9761 or Net_9990 or Net_10264)
        begin
            case (Net_10264)
                1'b0 :  tmp__mux_2_reg = Net_9761;
                1'b1 :  tmp__mux_2_reg = Net_9990;
            endcase
        end
        assign Net_9759 = tmp__mux_2_reg;
    end
    // -- Mux end --

    // -- Mux start --
    if (1)
    begin : mux_1
        reg  tmp__mux_1_reg;
        always @(Net_9745 or Net_3021 or Net_10264)
        begin
            case (Net_10264)
                1'b0 :  tmp__mux_1_reg = Net_9745;
                1'b1 :  tmp__mux_1_reg = Net_3021;
            endcase
        end
        assign Net_9749 = tmp__mux_1_reg;
    end
    // -- Mux end --

    CyControlReg_v1_80 MOTOR_DRIVER_TYPE (
        .clock(1'b0),
        .control_0(Net_10233),
        .control_1(Net_10264),
        .control_2(Net_10468),
        .control_3(Net_10469),
        .control_4(Net_10470),
        .control_5(Net_10471),
        .control_6(Net_10472),
        .control_7(Net_10473),
        .reset(1'b0));
    defparam MOTOR_DRIVER_TYPE.Bit0Mode = 0;
    defparam MOTOR_DRIVER_TYPE.Bit1Mode = 0;
    defparam MOTOR_DRIVER_TYPE.Bit2Mode = 0;
    defparam MOTOR_DRIVER_TYPE.Bit3Mode = 0;
    defparam MOTOR_DRIVER_TYPE.Bit4Mode = 0;
    defparam MOTOR_DRIVER_TYPE.Bit5Mode = 0;
    defparam MOTOR_DRIVER_TYPE.Bit6Mode = 0;
    defparam MOTOR_DRIVER_TYPE.Bit7Mode = 0;
    defparam MOTOR_DRIVER_TYPE.BitValue = 0;
    defparam MOTOR_DRIVER_TYPE.BusDisplay = 0;
    defparam MOTOR_DRIVER_TYPE.ExtrReset = 0;
    defparam MOTOR_DRIVER_TYPE.NumOutputs = 2;

	wire [0:0] tmpOE__FTDI_ENABLE_net;
	wire [0:0] tmpFB_0__FTDI_ENABLE_net;
	wire [0:0] tmpIO_0__FTDI_ENABLE_net;
	wire [0:0] tmpINTERRUPT_0__FTDI_ENABLE_net;
	electrical [0:0] tmpSIOVREF__FTDI_ENABLE_net;

	cy_psoc3_pins_v1_10
		#(.id("52f31aa9-2f0a-497d-9a1f-1424095e13e6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		FTDI_ENABLE
		 (.oe(tmpOE__FTDI_ENABLE_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__FTDI_ENABLE_net[0:0]}),
		  .io({tmpIO_0__FTDI_ENABLE_net[0:0]}),
		  .siovref(tmpSIOVREF__FTDI_ENABLE_net),
		  .interrupt({tmpINTERRUPT_0__FTDI_ENABLE_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__FTDI_ENABLE_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__RS485_CTS_net;
	wire [0:0] tmpFB_0__RS485_CTS_net;
	wire [0:0] tmpIO_0__RS485_CTS_net;
	wire [0:0] tmpINTERRUPT_0__RS485_CTS_net;
	electrical [0:0] tmpSIOVREF__RS485_CTS_net;

	cy_psoc3_pins_v1_10
		#(.id("4c15b41e-e284-4978-99e7-5aaee19bd0ce"),
		  .drive_mode(3'b011),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		RS485_CTS
		 (.oe(tmpOE__RS485_CTS_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__RS485_CTS_net[0:0]}),
		  .io({tmpIO_0__RS485_CTS_net[0:0]}),
		  .siovref(tmpSIOVREF__RS485_CTS_net),
		  .interrupt({tmpINTERRUPT_0__RS485_CTS_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__RS485_CTS_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    CyControlReg_v1_80 MOTOR_DIR_2 (
        .clock(1'b0),
        .control_0(Net_3021),
        .control_1(Net_3027),
        .control_2(Net_3028),
        .control_3(Net_3029),
        .control_4(Net_3031),
        .control_5(Net_3032),
        .control_6(Net_3033),
        .control_7(Net_3034),
        .reset(1'b0));
    defparam MOTOR_DIR_2.Bit0Mode = 0;
    defparam MOTOR_DIR_2.Bit1Mode = 0;
    defparam MOTOR_DIR_2.Bit2Mode = 0;
    defparam MOTOR_DIR_2.Bit3Mode = 0;
    defparam MOTOR_DIR_2.Bit4Mode = 0;
    defparam MOTOR_DIR_2.Bit5Mode = 0;
    defparam MOTOR_DIR_2.Bit6Mode = 0;
    defparam MOTOR_DIR_2.Bit7Mode = 0;
    defparam MOTOR_DIR_2.BitValue = 0;
    defparam MOTOR_DIR_2.BusDisplay = 0;
    defparam MOTOR_DIR_2.ExtrReset = 0;
    defparam MOTOR_DIR_2.NumOutputs = 1;

    Timer_v2_70_0 PACER_TIMER (
        .capture(1'b0),
        .capture_out(Net_301),
        .clock(Net_3328),
        .enable(1'b1),
        .interrupt(Net_297),
        .reset(Net_3249),
        .tc(Net_3264),
        .trigger(1'b1));
    defparam PACER_TIMER.CaptureCount = 2;
    defparam PACER_TIMER.CaptureCounterEnabled = 0;
    defparam PACER_TIMER.DeviceFamily = "PSoC5";
    defparam PACER_TIMER.InterruptOnCapture = 0;
    defparam PACER_TIMER.InterruptOnTC = 0;
    defparam PACER_TIMER.Resolution = 16;
    defparam PACER_TIMER.SiliconRevision = "0";


	cy_clock_v1_0
		#(.id("c3b6496a-f866-4de2-b1c7-5e685f719ae1"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		timer_clock_1
		 (.clock_out(Net_3328));


    ZeroTerminal ZeroTerminal_9 (
        .z(Net_3249));

    // -- SRFF Start --
    reg  cy_srff_1;
    always @(posedge Net_3328)
    begin
        cy_srff_1 <= (Net_3240 | Net_3018) & ~Net_3334;
    end
    assign Net_3018 = cy_srff_1;
    // -- SRFF End --

    CyControlReg_v1_80 RESET_FF (
        .clock(1'b0),
        .control_0(Net_3334),
        .control_1(Net_303),
        .control_2(Net_304),
        .control_3(Net_305),
        .control_4(Net_306),
        .control_5(Net_307),
        .control_6(Net_308),
        .control_7(Net_309),
        .reset(1'b0));
    defparam RESET_FF.Bit0Mode = 0;
    defparam RESET_FF.Bit1Mode = 0;
    defparam RESET_FF.Bit2Mode = 0;
    defparam RESET_FF.Bit3Mode = 0;
    defparam RESET_FF.Bit4Mode = 0;
    defparam RESET_FF.Bit5Mode = 0;
    defparam RESET_FF.Bit6Mode = 0;
    defparam RESET_FF.Bit7Mode = 0;
    defparam RESET_FF.BitValue = 0;
    defparam RESET_FF.BusDisplay = 0;
    defparam RESET_FF.ExtrReset = 0;
    defparam RESET_FF.NumOutputs = 1;

    CyStatusReg_v1_90 FF_STATUS (
        .clock(Net_3328),
        .intr(Net_319),
        .status_0(Net_3018),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .status_bus(8'b0));
    defparam FF_STATUS.Bit0Mode = 0;
    defparam FF_STATUS.Bit1Mode = 0;
    defparam FF_STATUS.Bit2Mode = 0;
    defparam FF_STATUS.Bit3Mode = 0;
    defparam FF_STATUS.Bit4Mode = 0;
    defparam FF_STATUS.Bit5Mode = 0;
    defparam FF_STATUS.Bit6Mode = 0;
    defparam FF_STATUS.Bit7Mode = 0;
    defparam FF_STATUS.BusDisplay = 0;
    defparam FF_STATUS.Interrupt = 0;
    defparam FF_STATUS.MaskValue = 0;
    defparam FF_STATUS.NumInputs = 1;

    Timer_v2_70_1 MY_TIMER (
        .capture(1'b0),
        .capture_out(Net_326),
        .clock(Net_4387),
        .enable(1'b1),
        .interrupt(Net_322),
        .reset(Net_4386),
        .tc(Net_327),
        .trigger(1'b1));
    defparam MY_TIMER.CaptureCount = 2;
    defparam MY_TIMER.CaptureCounterEnabled = 0;
    defparam MY_TIMER.DeviceFamily = "PSoC5";
    defparam MY_TIMER.InterruptOnCapture = 0;
    defparam MY_TIMER.InterruptOnTC = 0;
    defparam MY_TIMER.Resolution = 16;
    defparam MY_TIMER.SiliconRevision = "0";


	cy_clock_v1_0
		#(.id("920ac626-75fc-42be-bddc-386ba9cec7f2"),
		  .source_clock_id("CEF43CFB-0213-49b9-B980-2FFAB81C5B47"),
		  .divisor(0),
		  .period("1000000000"),
		  .is_direct(0),
		  .is_digital(1))
		timer_clock
		 (.clock_out(Net_4387));


    cy_sync_v1_0 Sync_1 (
        .clock(Net_3328),
        .s_in(Net_3264),
        .s_out(Net_3240));
    defparam Sync_1.SignalWidth = 1;

    UART_v2_50_2 UART_RS485 (
        .clock(Net_124),
        .cts_n(1'b0),
        .reset(Net_332),
        .rts_n(Net_331),
        .rx(Net_6196),
        .rx_clk(Net_337),
        .rx_data(Net_336),
        .rx_interrupt(Net_6117),
        .tx(Net_2627),
        .tx_clk(Net_335),
        .tx_data(Net_334),
        .tx_en(Net_6020),
        .tx_interrupt(Net_333));
    defparam UART_RS485.Address1 = 2;
    defparam UART_RS485.Address2 = 0;
    defparam UART_RS485.EnIntRXInterrupt = 1;
    defparam UART_RS485.EnIntTXInterrupt = 0;
    defparam UART_RS485.FlowControl = 0;
    defparam UART_RS485.HalfDuplexEn = 0;
    defparam UART_RS485.HwTXEnSignal = 1;
    defparam UART_RS485.NumDataBits = 8;
    defparam UART_RS485.NumStopBits = 1;
    defparam UART_RS485.ParityType = 0;
    defparam UART_RS485.RXEnable = 1;
    defparam UART_RS485.TXEnable = 1;

	wire [0:0] tmpOE__RS485_RX_net;
	wire [0:0] tmpIO_0__RS485_RX_net;
	wire [0:0] tmpINTERRUPT_0__RS485_RX_net;
	electrical [0:0] tmpSIOVREF__RS485_RX_net;

	cy_psoc3_pins_v1_10
		#(.id("1425177d-0d0e-4468-8bcc-e638e5509a9b"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(0),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		RS485_RX
		 (.oe(tmpOE__RS485_RX_net),
		  .y({1'b0}),
		  .fb({Net_6196}),
		  .io({tmpIO_0__RS485_RX_net[0:0]}),
		  .siovref(tmpSIOVREF__RS485_RX_net),
		  .interrupt({tmpINTERRUPT_0__RS485_RX_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__RS485_RX_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__RS485_TX_net;
	wire [0:0] tmpFB_0__RS485_TX_net;
	wire [0:0] tmpIO_0__RS485_TX_net;
	wire [0:0] tmpINTERRUPT_0__RS485_TX_net;
	electrical [0:0] tmpSIOVREF__RS485_TX_net;

	cy_psoc3_pins_v1_10
		#(.id("d55049de-f559-4856-91bd-6913f5ef939b"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(0),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		RS485_TX
		 (.oe(tmpOE__RS485_TX_net),
		  .y({Net_2627}),
		  .fb({tmpFB_0__RS485_TX_net[0:0]}),
		  .io({tmpIO_0__RS485_TX_net[0:0]}),
		  .siovref(tmpSIOVREF__RS485_TX_net),
		  .interrupt({tmpINTERRUPT_0__RS485_TX_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__RS485_TX_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__RS_485_EN_net;
	wire [0:0] tmpFB_0__RS_485_EN_net;
	wire [0:0] tmpIO_0__RS_485_EN_net;
	wire [0:0] tmpINTERRUPT_0__RS_485_EN_net;
	electrical [0:0] tmpSIOVREF__RS_485_EN_net;

	cy_psoc3_pins_v1_10
		#(.id("294a8542-13bb-492d-93ce-945bd1f598a8"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(0),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		RS_485_EN
		 (.oe(tmpOE__RS_485_EN_net),
		  .y({Net_6020}),
		  .fb({tmpFB_0__RS_485_EN_net[0:0]}),
		  .io({tmpIO_0__RS_485_EN_net[0:0]}),
		  .siovref(tmpSIOVREF__RS_485_EN_net),
		  .interrupt({tmpINTERRUPT_0__RS_485_EN_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__RS_485_EN_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_332));


	cy_isr_v1_0
		#(.int_type(2'b10))
		ISR_RS485_RX
		 (.int_signal(Net_6117));



	cy_clock_v1_0
		#(.id("1a4ed19a-fcee-4525-96fe-2f2f0b7a202a"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(3),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(1))
		CLOCK_UART
		 (.clock_out(Net_124));


    Timer_v2_70_3 CYCLES_TIMER (
        .capture(1'b0),
        .capture_out(Net_3878),
        .clock(Net_2711),
        .enable(1'b1),
        .interrupt(Net_3874),
        .reset(Net_3872),
        .tc(Net_345),
        .trigger(1'b1));
    defparam CYCLES_TIMER.CaptureCount = 2;
    defparam CYCLES_TIMER.CaptureCounterEnabled = 0;
    defparam CYCLES_TIMER.DeviceFamily = "PSoC5";
    defparam CYCLES_TIMER.InterruptOnCapture = 0;
    defparam CYCLES_TIMER.InterruptOnTC = 1;
    defparam CYCLES_TIMER.Resolution = 16;
    defparam CYCLES_TIMER.SiliconRevision = "0";


	cy_clock_v1_0
		#(.id("ec08f09b-11cf-4662-a6d5-18854155fb8e"),
		  .source_clock_id("CEF43CFB-0213-49b9-B980-2FFAB81C5B47"),
		  .divisor(0),
		  .period("20000000000000"),
		  .is_direct(0),
		  .is_digital(1))
		counter_cyc_clk
		 (.clock_out(Net_2711));


    ZeroTerminal ZeroTerminal_6 (
        .z(Net_3872));


	cy_isr_v1_0
		#(.int_type(2'b10))
		ISR_CYCLES
		 (.int_signal(Net_345));


    emFile_v1_20_5 SD ();


    assign Net_3025 = ~Net_3021;


    assign Net_9745 = Net_9990 & Net_3025;

	wire [0:0] tmpOE__CS_RTC_net;
	wire [0:0] tmpFB_0__CS_RTC_net;
	wire [0:0] tmpIO_0__CS_RTC_net;
	wire [0:0] tmpINTERRUPT_0__CS_RTC_net;
	electrical [0:0] tmpSIOVREF__CS_RTC_net;

	cy_psoc3_pins_v1_10
		#(.id("fa317fe3-42e6-4c88-87df-5d5f0f9ec96d"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		CS_RTC
		 (.oe(tmpOE__CS_RTC_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__CS_RTC_net[0:0]}),
		  .io({tmpIO_0__CS_RTC_net[0:0]}),
		  .siovref(tmpSIOVREF__CS_RTC_net),
		  .interrupt({tmpINTERRUPT_0__CS_RTC_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__CS_RTC_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__CLK_RTC_net;
	wire [0:0] tmpFB_0__CLK_RTC_net;
	wire [0:0] tmpIO_0__CLK_RTC_net;
	wire [0:0] tmpINTERRUPT_0__CLK_RTC_net;
	electrical [0:0] tmpSIOVREF__CLK_RTC_net;

	cy_psoc3_pins_v1_10
		#(.id("ab3a2ca0-fa0c-4599-b9a3-2d4b412fba13"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		CLK_RTC
		 (.oe(tmpOE__CLK_RTC_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__CLK_RTC_net[0:0]}),
		  .io({tmpIO_0__CLK_RTC_net[0:0]}),
		  .siovref(tmpSIOVREF__CLK_RTC_net),
		  .interrupt({tmpINTERRUPT_0__CLK_RTC_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__CLK_RTC_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__MOSI_RTC_net;
	wire [0:0] tmpFB_0__MOSI_RTC_net;
	wire [0:0] tmpIO_0__MOSI_RTC_net;
	wire [0:0] tmpINTERRUPT_0__MOSI_RTC_net;
	electrical [0:0] tmpSIOVREF__MOSI_RTC_net;

	cy_psoc3_pins_v1_10
		#(.id("9104f111-873f-4d4f-9435-55b9f7e766e1"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MOSI_RTC
		 (.oe(tmpOE__MOSI_RTC_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__MOSI_RTC_net[0:0]}),
		  .io({tmpIO_0__MOSI_RTC_net[0:0]}),
		  .siovref(tmpSIOVREF__MOSI_RTC_net),
		  .interrupt({tmpINTERRUPT_0__MOSI_RTC_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MOSI_RTC_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__MISO_RTC_net;
	wire [0:0] tmpFB_0__MISO_RTC_net;
	wire [0:0] tmpIO_0__MISO_RTC_net;
	wire [0:0] tmpINTERRUPT_0__MISO_RTC_net;
	electrical [0:0] tmpSIOVREF__MISO_RTC_net;

	cy_psoc3_pins_v1_10
		#(.id("9ba63a55-9029-4fc5-8979-f92f80c52cd3"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MISO_RTC
		 (.oe(tmpOE__MISO_RTC_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__MISO_RTC_net[0:0]}),
		  .io({tmpIO_0__MISO_RTC_net[0:0]}),
		  .siovref(tmpSIOVREF__MISO_RTC_net),
		  .interrupt({tmpINTERRUPT_0__MISO_RTC_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MISO_RTC_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_9761 = Net_9990 & Net_3021;

	wire [0:0] tmpOE__MOTOR_EN_2_net;
	wire [0:0] tmpFB_0__MOTOR_EN_2_net;
	wire [0:0] tmpIO_0__MOTOR_EN_2_net;
	wire [0:0] tmpINTERRUPT_0__MOTOR_EN_2_net;
	electrical [0:0] tmpSIOVREF__MOTOR_EN_2_net;

	cy_psoc3_pins_v1_10
		#(.id("f1224875-b991-4103-8489-a48d67847102"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage("2"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases("M1"),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MOTOR_EN_2
		 (.oe(tmpOE__MOTOR_EN_2_net),
		  .y({Net_9776}),
		  .fb({tmpFB_0__MOTOR_EN_2_net[0:0]}),
		  .io({tmpIO_0__MOTOR_EN_2_net[0:0]}),
		  .siovref(tmpSIOVREF__MOTOR_EN_2_net),
		  .interrupt({tmpINTERRUPT_0__MOTOR_EN_2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MOTOR_EN_2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_9776 = ~Net_10313;


    assign Net_9774 = ~Net_10337;

    CyControlReg_v1_80 MOTOR_ON_OFF_1 (
        .clock(1'b0),
        .control_0(Net_10337),
        .control_1(Net_10322),
        .control_2(Net_2792),
        .control_3(Net_2793),
        .control_4(Net_2794),
        .control_5(Net_2795),
        .control_6(Net_2796),
        .control_7(Net_2797),
        .reset(1'b0));
    defparam MOTOR_ON_OFF_1.Bit0Mode = 0;
    defparam MOTOR_ON_OFF_1.Bit1Mode = 0;
    defparam MOTOR_ON_OFF_1.Bit2Mode = 0;
    defparam MOTOR_ON_OFF_1.Bit3Mode = 0;
    defparam MOTOR_ON_OFF_1.Bit4Mode = 0;
    defparam MOTOR_ON_OFF_1.Bit5Mode = 0;
    defparam MOTOR_ON_OFF_1.Bit6Mode = 0;
    defparam MOTOR_ON_OFF_1.Bit7Mode = 0;
    defparam MOTOR_ON_OFF_1.BitValue = 0;
    defparam MOTOR_ON_OFF_1.BusDisplay = 0;
    defparam MOTOR_ON_OFF_1.ExtrReset = 0;
    defparam MOTOR_ON_OFF_1.NumOutputs = 1;

	wire [0:0] tmpOE__MOTOR_EN_1_net;
	wire [0:0] tmpFB_0__MOTOR_EN_1_net;
	wire [0:0] tmpIO_0__MOTOR_EN_1_net;
	wire [0:0] tmpINTERRUPT_0__MOTOR_EN_1_net;
	electrical [0:0] tmpSIOVREF__MOTOR_EN_1_net;

	cy_psoc3_pins_v1_10
		#(.id("b472b5a3-8866-40d5-9011-6f6354224e98"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage("2"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases("M1"),
		  .pin_mode("O"),
		  .por_state(2),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MOTOR_EN_1
		 (.oe(tmpOE__MOTOR_EN_1_net),
		  .y({Net_9774}),
		  .fb({tmpFB_0__MOTOR_EN_1_net[0:0]}),
		  .io({tmpIO_0__MOTOR_EN_1_net[0:0]}),
		  .siovref(tmpSIOVREF__MOTOR_EN_1_net),
		  .interrupt({tmpINTERRUPT_0__MOTOR_EN_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MOTOR_EN_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__LED_RED_net;
	wire [0:0] tmpFB_0__LED_RED_net;
	wire [0:0] tmpIO_0__LED_RED_net;
	wire [0:0] tmpINTERRUPT_0__LED_RED_net;
	electrical [0:0] tmpSIOVREF__LED_RED_net;

	cy_psoc3_pins_v1_10
		#(.id("9a2cf45d-6117-434c-b59b-8d3b55fadb43"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_RED
		 (.oe(tmpOE__LED_RED_net),
		  .y({Net_7325}),
		  .fb({tmpFB_0__LED_RED_net[0:0]}),
		  .io({tmpIO_0__LED_RED_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_RED_net),
		  .interrupt({tmpINTERRUPT_0__LED_RED_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_RED_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    PWM_v3_30_6 BLINK_05HZ (
        .capture(1'b0),
        .clock(Net_6987),
        .cmp_sel(1'b0),
        .enable(Net_3925),
        .interrupt(Net_8888),
        .kill(1'b1),
        .ph1(Net_8893),
        .ph2(Net_8894),
        .pwm(Net_5579),
        .pwm1(Net_8886),
        .pwm2(Net_8887),
        .reset(Net_7326),
        .tc(Net_8885),
        .trigger(1'b0));
    defparam BLINK_05HZ.Resolution = 16;

    CyControlReg_v1_80 LED_CTRL (
        .clock(1'b0),
        .control_0(Net_7450),
        .control_1(Net_7694),
        .control_2(Net_7337),
        .control_3(Net_7338),
        .control_4(Net_7339),
        .control_5(Net_7340),
        .control_6(Net_7341),
        .control_7(Net_7342),
        .reset(1'b0));
    defparam LED_CTRL.Bit0Mode = 0;
    defparam LED_CTRL.Bit1Mode = 0;
    defparam LED_CTRL.Bit2Mode = 0;
    defparam LED_CTRL.Bit3Mode = 0;
    defparam LED_CTRL.Bit4Mode = 0;
    defparam LED_CTRL.Bit5Mode = 0;
    defparam LED_CTRL.Bit6Mode = 0;
    defparam LED_CTRL.Bit7Mode = 0;
    defparam LED_CTRL.BitValue = 0;
    defparam LED_CTRL.BusDisplay = 0;
    defparam LED_CTRL.ExtrReset = 0;
    defparam LED_CTRL.NumOutputs = 2;

    CyControlReg_v1_80 BLINK_CTRL_EN (
        .clock(1'b0),
        .control_0(Net_3925),
        .control_1(Net_5930),
        .control_2(Net_7345),
        .control_3(Net_7346),
        .control_4(Net_7347),
        .control_5(Net_7348),
        .control_6(Net_7349),
        .control_7(Net_7350),
        .reset(1'b0));
    defparam BLINK_CTRL_EN.Bit0Mode = 0;
    defparam BLINK_CTRL_EN.Bit1Mode = 0;
    defparam BLINK_CTRL_EN.Bit2Mode = 0;
    defparam BLINK_CTRL_EN.Bit3Mode = 0;
    defparam BLINK_CTRL_EN.Bit4Mode = 0;
    defparam BLINK_CTRL_EN.Bit5Mode = 0;
    defparam BLINK_CTRL_EN.Bit6Mode = 0;
    defparam BLINK_CTRL_EN.Bit7Mode = 0;
    defparam BLINK_CTRL_EN.BitValue = 0;
    defparam BLINK_CTRL_EN.BusDisplay = 0;
    defparam BLINK_CTRL_EN.ExtrReset = 0;
    defparam BLINK_CTRL_EN.NumOutputs = 2;

	wire [0:0] tmpOE__LED_GREEN_net;
	wire [0:0] tmpFB_0__LED_GREEN_net;
	wire [0:0] tmpIO_0__LED_GREEN_net;
	wire [0:0] tmpINTERRUPT_0__LED_GREEN_net;
	electrical [0:0] tmpSIOVREF__LED_GREEN_net;

	cy_psoc3_pins_v1_10
		#(.id("b2c64652-8fd1-4414-a6d8-7525576a1723"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_GREEN
		 (.oe(tmpOE__LED_GREEN_net),
		  .y({Net_7353}),
		  .fb({tmpFB_0__LED_GREEN_net[0:0]}),
		  .io({tmpIO_0__LED_GREEN_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_GREEN_net),
		  .interrupt({tmpINTERRUPT_0__LED_GREEN_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_GREEN_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    PWM_v3_30_7 BLINK_25HZ (
        .capture(1'b0),
        .clock(Net_6987),
        .cmp_sel(1'b0),
        .enable(Net_5930),
        .interrupt(Net_8898),
        .kill(1'b1),
        .ph1(Net_8903),
        .ph2(Net_8904),
        .pwm(Net_7667),
        .pwm1(Net_8896),
        .pwm2(Net_8897),
        .reset(Net_7185),
        .tc(Net_8895),
        .trigger(1'b0));
    defparam BLINK_25HZ.Resolution = 8;

    BasicCounter_v1_0 BasicCounter (
        .clock(Net_2835),
        .cnt(Net_5190[3:0]),
        .en(Net_2835),
        .reset(Net_5460));
    defparam BasicCounter.Width = 4;

    CyControlReg_v1_80 ADC_SOC (
        .clock(1'b0),
        .control_0(Net_4627),
        .control_1(Net_6731),
        .control_2(Net_6732),
        .control_3(Net_6733),
        .control_4(Net_6734),
        .control_5(Net_6735),
        .control_6(Net_6736),
        .control_7(Net_6737),
        .reset(1'b0));
    defparam ADC_SOC.Bit0Mode = 0;
    defparam ADC_SOC.Bit1Mode = 0;
    defparam ADC_SOC.Bit2Mode = 0;
    defparam ADC_SOC.Bit3Mode = 0;
    defparam ADC_SOC.Bit4Mode = 0;
    defparam ADC_SOC.Bit5Mode = 0;
    defparam ADC_SOC.Bit6Mode = 0;
    defparam ADC_SOC.Bit7Mode = 0;
    defparam ADC_SOC.BitValue = 0;
    defparam ADC_SOC.BusDisplay = 0;
    defparam ADC_SOC.ExtrReset = 0;
    defparam ADC_SOC.NumOutputs = 1;


	cy_dma_v1_0
		#(.drq_type(2'b00))
		DMA
		 (.drq(Net_5118),
		  .nrq(Net_5290),
		  .trq(1'b0));



	cy_clock_v1_0
		#(.id("1d5acd23-2612-4d9a-9389-a1b93ac6a3db"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		ADC_CLK
		 (.clock_out(Net_5442));


    CyStatusReg_v1_90 ADC_STATUS (
        .clock(Net_5442),
        .intr(Net_6749),
        .status_0(Net_5290),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .status_bus(8'b0));
    defparam ADC_STATUS.Bit0Mode = 1;
    defparam ADC_STATUS.Bit1Mode = 0;
    defparam ADC_STATUS.Bit2Mode = 0;
    defparam ADC_STATUS.Bit3Mode = 0;
    defparam ADC_STATUS.Bit4Mode = 0;
    defparam ADC_STATUS.Bit5Mode = 0;
    defparam ADC_STATUS.Bit6Mode = 0;
    defparam ADC_STATUS.Bit7Mode = 0;
    defparam ADC_STATUS.BusDisplay = 0;
    defparam ADC_STATUS.Interrupt = 0;
    defparam ADC_STATUS.MaskValue = 0;
    defparam ADC_STATUS.NumInputs = 1;

    ADC_DelSig_v3_20_8 ADC (
        .aclk(1'b0),
        .eoc(Net_5118),
        .mi(1'b0),
        .nVref(Net_6753),
        .soc(Net_2836),
        .vminus(Net_6751),
        .vplus(Net_6730));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_7185));


	cy_clock_v1_0
		#(.id("377242cc-7fd6-40c9-ba0a-2dbe363a43ad"),
		  .source_clock_id("CEF43CFB-0213-49b9-B980-2FFAB81C5B47"),
		  .divisor(0),
		  .period("2000000000000"),
		  .is_direct(0),
		  .is_digital(1))
		CLOCK_PWM_BLINK
		 (.clock_out(Net_6987));


    ZeroTerminal ZeroTerminal_7 (
        .z(Net_7326));


    assign Net_7353 = Net_5579 | Net_7694;


    assign Net_7325 = Net_5579 | Net_7667 | Net_7450;

	wire [0:0] tmpOE__MOTOR_2B_net;
	wire [0:0] tmpFB_0__MOTOR_2B_net;
	wire [0:0] tmpIO_0__MOTOR_2B_net;
	wire [0:0] tmpINTERRUPT_0__MOTOR_2B_net;
	electrical [0:0] tmpSIOVREF__MOTOR_2B_net;

	cy_psoc3_pins_v1_10
		#(.id("f304e074-cdf5-4088-ab4b-c9b40bedc753"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MOTOR_2B
		 (.oe(tmpOE__MOTOR_2B_net),
		  .y({Net_9749}),
		  .fb({tmpFB_0__MOTOR_2B_net[0:0]}),
		  .io({tmpIO_0__MOTOR_2B_net[0:0]}),
		  .siovref(tmpSIOVREF__MOTOR_2B_net),
		  .interrupt({tmpINTERRUPT_0__MOTOR_2B_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MOTOR_2B_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__MOTOR_2A_net;
	wire [0:0] tmpFB_0__MOTOR_2A_net;
	wire [0:0] tmpIO_0__MOTOR_2A_net;
	wire [0:0] tmpINTERRUPT_0__MOTOR_2A_net;
	electrical [0:0] tmpSIOVREF__MOTOR_2A_net;

	cy_psoc3_pins_v1_10
		#(.id("e25c4c42-92cc-4661-a040-d5f89c990211"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MOTOR_2A
		 (.oe(tmpOE__MOTOR_2A_net),
		  .y({Net_9759}),
		  .fb({tmpFB_0__MOTOR_2A_net[0:0]}),
		  .io({tmpIO_0__MOTOR_2A_net[0:0]}),
		  .siovref(tmpSIOVREF__MOTOR_2A_net),
		  .interrupt({tmpINTERRUPT_0__MOTOR_2A_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MOTOR_2A_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_2640 = ~Net_2982;


    assign Net_9765 = Net_9969 & Net_2640;


    assign Net_9770 = Net_9969 & Net_2982;

    CyControlReg_v1_80 MOTOR_DIR_1 (
        .clock(1'b0),
        .control_0(Net_2982),
        .control_1(Net_2621),
        .control_2(Net_2622),
        .control_3(Net_2623),
        .control_4(Net_2624),
        .control_5(Net_2625),
        .control_6(Net_2626),
        .control_7(Net_2628),
        .reset(1'b0));
    defparam MOTOR_DIR_1.Bit0Mode = 0;
    defparam MOTOR_DIR_1.Bit1Mode = 0;
    defparam MOTOR_DIR_1.Bit2Mode = 0;
    defparam MOTOR_DIR_1.Bit3Mode = 0;
    defparam MOTOR_DIR_1.Bit4Mode = 0;
    defparam MOTOR_DIR_1.Bit5Mode = 0;
    defparam MOTOR_DIR_1.Bit6Mode = 0;
    defparam MOTOR_DIR_1.Bit7Mode = 0;
    defparam MOTOR_DIR_1.BitValue = 0;
    defparam MOTOR_DIR_1.BusDisplay = 0;
    defparam MOTOR_DIR_1.ExtrReset = 0;
    defparam MOTOR_DIR_1.NumOutputs = 1;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_9919));


	cy_clock_v1_0
		#(.id("f801b4a9-38f2-478d-b30d-81c0e8844af6"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(0),
		  .period("500000000"),
		  .is_direct(0),
		  .is_digital(1))
		CLOCK_PWM
		 (.clock_out(Net_2334));


    PWM_v3_30_9 PWM_MOTORS (
        .capture(1'b0),
        .clock(Net_2334),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_10710),
        .kill(1'b1),
        .ph1(Net_10712),
        .ph2(Net_10713),
        .pwm(Net_10714),
        .pwm1(Net_9969),
        .pwm2(Net_9990),
        .reset(Net_9919),
        .tc(Net_10715),
        .trigger(1'b0));
    defparam PWM_MOTORS.Resolution = 8;

    CyControlReg_v1_80 ADC_N_CHANNELS_USED (
        .clock(1'b0),
        .control_0(Net_7039),
        .control_1(Net_7036),
        .control_2(Net_7037),
        .control_3(Net_7038),
        .control_4(Net_7040),
        .control_5(Net_7041),
        .control_6(Net_7042),
        .control_7(Net_7043),
        .control_bus(Net_7046[3:0]),
        .reset(1'b0));
    defparam ADC_N_CHANNELS_USED.Bit0Mode = 0;
    defparam ADC_N_CHANNELS_USED.Bit1Mode = 0;
    defparam ADC_N_CHANNELS_USED.Bit2Mode = 0;
    defparam ADC_N_CHANNELS_USED.Bit3Mode = 0;
    defparam ADC_N_CHANNELS_USED.Bit4Mode = 0;
    defparam ADC_N_CHANNELS_USED.Bit5Mode = 0;
    defparam ADC_N_CHANNELS_USED.Bit6Mode = 0;
    defparam ADC_N_CHANNELS_USED.Bit7Mode = 0;
    defparam ADC_N_CHANNELS_USED.BitValue = 3;
    defparam ADC_N_CHANNELS_USED.BusDisplay = 1;
    defparam ADC_N_CHANNELS_USED.ExtrReset = 0;
    defparam ADC_N_CHANNELS_USED.NumOutputs = 4;

    CyControlReg_v1_80 MY_TIMER_REG (
        .clock(1'b0),
        .control_0(Net_4386),
        .control_1(Net_8135),
        .control_2(Net_8136),
        .control_3(Net_8137),
        .control_4(Net_8139),
        .control_5(Net_8140),
        .control_6(Net_8141),
        .control_7(Net_8142),
        .reset(1'b0));
    defparam MY_TIMER_REG.Bit0Mode = 0;
    defparam MY_TIMER_REG.Bit1Mode = 0;
    defparam MY_TIMER_REG.Bit2Mode = 0;
    defparam MY_TIMER_REG.Bit3Mode = 0;
    defparam MY_TIMER_REG.Bit4Mode = 0;
    defparam MY_TIMER_REG.Bit5Mode = 0;
    defparam MY_TIMER_REG.Bit6Mode = 0;
    defparam MY_TIMER_REG.Bit7Mode = 0;
    defparam MY_TIMER_REG.BitValue = 0;
    defparam MY_TIMER_REG.BusDisplay = 0;
    defparam MY_TIMER_REG.ExtrReset = 0;
    defparam MY_TIMER_REG.NumOutputs = 1;

	wire [0:0] tmpOE__VALVE_net;
	wire [0:0] tmpFB_0__VALVE_net;
	wire [0:0] tmpIO_0__VALVE_net;
	wire [0:0] tmpINTERRUPT_0__VALVE_net;
	electrical [0:0] tmpSIOVREF__VALVE_net;

	cy_psoc3_pins_v1_10
		#(.id("f0c39f76-6993-406f-a5fc-c4f817754caf"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(2),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		VALVE
		 (.oe(tmpOE__VALVE_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__VALVE_net[0:0]}),
		  .io({tmpIO_0__VALVE_net[0:0]}),
		  .siovref(tmpSIOVREF__VALVE_net),
		  .interrupt({tmpINTERRUPT_0__VALVE_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__VALVE_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__VT_1A_net;
	wire [0:0] tmpFB_0__VT_1A_net;
	wire [0:0] tmpIO_0__VT_1A_net;
	wire [0:0] tmpINTERRUPT_0__VT_1A_net;
	electrical [0:0] tmpSIOVREF__VT_1A_net;

	cy_psoc3_pins_v1_10
		#(.id("3c2654c0-a360-4d3d-a96a-4409f2550c0e"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		VT_1A
		 (.oe(tmpOE__VT_1A_net),
		  .y({Net_10659}),
		  .fb({tmpFB_0__VT_1A_net[0:0]}),
		  .io({tmpIO_0__VT_1A_net[0:0]}),
		  .siovref(tmpSIOVREF__VT_1A_net),
		  .interrupt({tmpINTERRUPT_0__VT_1A_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__VT_1A_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    PWM_v3_30_10 PWM_VT (
        .capture(1'b0),
        .clock(Net_10350),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_10444),
        .kill(1'b1),
        .ph1(Net_10446),
        .ph2(Net_10447),
        .pwm(Net_10448),
        .pwm1(Net_10358),
        .pwm2(Net_10359),
        .reset(Net_10360),
        .tc(Net_10449),
        .trigger(1'b0));
    defparam PWM_VT.Resolution = 16;

    ZeroTerminal ZeroTerminal_4 (
        .z(Net_10360));

	wire [0:0] tmpOE__VT_1B_net;
	wire [0:0] tmpFB_0__VT_1B_net;
	wire [0:0] tmpIO_0__VT_1B_net;
	wire [0:0] tmpINTERRUPT_0__VT_1B_net;
	electrical [0:0] tmpSIOVREF__VT_1B_net;

	cy_psoc3_pins_v1_10
		#(.id("dcdedfd7-c09c-4bcb-97ac-281542b4f55e"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		VT_1B
		 (.oe(tmpOE__VT_1B_net),
		  .y({Net_10658}),
		  .fb({tmpFB_0__VT_1B_net[0:0]}),
		  .io({tmpIO_0__VT_1B_net[0:0]}),
		  .siovref(tmpSIOVREF__VT_1B_net),
		  .interrupt({tmpINTERRUPT_0__VT_1B_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__VT_1B_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    CyControlReg_v1_80 VT1_DIR (
        .clock(1'b0),
        .control_0(Net_10364),
        .control_1(Net_10365),
        .control_2(Net_10366),
        .control_3(Net_10367),
        .control_4(Net_10368),
        .control_5(Net_10369),
        .control_6(Net_10370),
        .control_7(Net_10371),
        .reset(1'b0));
    defparam VT1_DIR.Bit0Mode = 0;
    defparam VT1_DIR.Bit1Mode = 0;
    defparam VT1_DIR.Bit2Mode = 0;
    defparam VT1_DIR.Bit3Mode = 0;
    defparam VT1_DIR.Bit4Mode = 0;
    defparam VT1_DIR.Bit5Mode = 0;
    defparam VT1_DIR.Bit6Mode = 0;
    defparam VT1_DIR.Bit7Mode = 0;
    defparam VT1_DIR.BitValue = 0;
    defparam VT1_DIR.BusDisplay = 0;
    defparam VT1_DIR.ExtrReset = 0;
    defparam VT1_DIR.NumOutputs = 1;


    assign Net_10659 = Net_10358 & Net_10364;


    assign Net_10658 = Net_10358 & Net_10373;


    assign Net_10373 = ~Net_10364;

	wire [0:0] tmpOE__VT_2A_net;
	wire [0:0] tmpFB_0__VT_2A_net;
	wire [0:0] tmpIO_0__VT_2A_net;
	wire [0:0] tmpINTERRUPT_0__VT_2A_net;
	electrical [0:0] tmpSIOVREF__VT_2A_net;

	cy_psoc3_pins_v1_10
		#(.id("24181710-909c-4a53-828b-d4f835263bfb"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		VT_2A
		 (.oe(tmpOE__VT_2A_net),
		  .y({Net_10661}),
		  .fb({tmpFB_0__VT_2A_net[0:0]}),
		  .io({tmpIO_0__VT_2A_net[0:0]}),
		  .siovref(tmpSIOVREF__VT_2A_net),
		  .interrupt({tmpINTERRUPT_0__VT_2A_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__VT_2A_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__VT_2B_net;
	wire [0:0] tmpFB_0__VT_2B_net;
	wire [0:0] tmpIO_0__VT_2B_net;
	wire [0:0] tmpINTERRUPT_0__VT_2B_net;
	electrical [0:0] tmpSIOVREF__VT_2B_net;

	cy_psoc3_pins_v1_10
		#(.id("67061b40-28e3-4586-bdfb-c64909c6e505"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		VT_2B
		 (.oe(tmpOE__VT_2B_net),
		  .y({Net_10660}),
		  .fb({tmpFB_0__VT_2B_net[0:0]}),
		  .io({tmpIO_0__VT_2B_net[0:0]}),
		  .siovref(tmpSIOVREF__VT_2B_net),
		  .interrupt({tmpINTERRUPT_0__VT_2B_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__VT_2B_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_10661 = Net_10359 & Net_10374;


    assign Net_10660 = Net_10359 & Net_10375;


    assign Net_10375 = ~Net_10374;

    CyControlReg_v1_80 VT2_DIR (
        .clock(1'b0),
        .control_0(Net_10374),
        .control_1(Net_10377),
        .control_2(Net_10378),
        .control_3(Net_10379),
        .control_4(Net_10380),
        .control_5(Net_10381),
        .control_6(Net_10382),
        .control_7(Net_10383),
        .reset(1'b0));
    defparam VT2_DIR.Bit0Mode = 0;
    defparam VT2_DIR.Bit1Mode = 0;
    defparam VT2_DIR.Bit2Mode = 0;
    defparam VT2_DIR.Bit3Mode = 0;
    defparam VT2_DIR.Bit4Mode = 0;
    defparam VT2_DIR.Bit5Mode = 0;
    defparam VT2_DIR.Bit6Mode = 0;
    defparam VT2_DIR.Bit7Mode = 0;
    defparam VT2_DIR.BitValue = 0;
    defparam VT2_DIR.BusDisplay = 0;
    defparam VT2_DIR.ExtrReset = 0;
    defparam VT2_DIR.NumOutputs = 1;


	cy_clock_v1_0
		#(.id("cb0b6f2c-4a6d-4d75-9d48-21ad8be39027"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(0),
		  .period("83333333.3333333"),
		  .is_direct(0),
		  .is_digital(1))
		CLOCK_VT
		 (.clock_out(Net_10350));




endmodule


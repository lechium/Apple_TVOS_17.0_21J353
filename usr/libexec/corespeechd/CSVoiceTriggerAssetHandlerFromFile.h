//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSOnDeviceCompilationHandler;

@interface CSVoiceTriggerAssetHandlerFromFile
{
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000079c45
- (void)getPreinstallVoiceTriggerAssetForCurrentLocale:(CDUnknownBlockType)arg1;	// IMP=0x0010000000079c2e
- (void)triggerAssetRefresh;	// IMP=0x0010000000079c28
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000799fb
- (void)start;	// IMP=0x00100000000799f5
- (id)init;	// IMP=0x00100000000799e1
- (id)initWithDisableOnDeviceCompilation:(_Bool)arg1;	// IMP=0x0010000000079958

@end


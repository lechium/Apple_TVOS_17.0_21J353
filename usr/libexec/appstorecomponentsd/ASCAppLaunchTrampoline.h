//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ASCAppLaunchTrampolineWorkspace;

@interface ASCAppLaunchTrampoline : NSObject
{
    NSObject<ASCAppLaunchTrampolineWorkspace> *_workspace;	// 8 = 0x8
}

+ (id)log;	// IMP=0x0020000000003570
- (void).cxx_destruct;	// IMP=0x0020000000004ff1
@property(readonly, nonatomic) NSObject<ASCAppLaunchTrampolineWorkspace> *workspace; // @synthesize workspace=_workspace;
- (id)productPageURLForAdamId:(id)arg1 deeplink:(id)arg2 eventId:(id)arg3 encodedMetrics:(id)arg4 sourceApplication:(id)arg5;	// IMP=0x0010000000004d01
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2 encodedMetrics:(id)arg3 sourceApplication:(id)arg4;	// IMP=0x0010000000004cd7
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2 encodedMetrics:(id)arg3;	// IMP=0x0010000000004cc2
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2;	// IMP=0x0010000000004cad
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2 workspace:(id)arg3;	// IMP=0x00100000000049fd
- (id)handleURL:(id)arg1 workspace:(id)arg2;	// IMP=0x00100000000036c9
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;	// IMP=0x00100000000036b3
- (id)handleURL:(id)arg1;	// IMP=0x001000000000369d
- (id)initWithWorkspace:(id)arg1;	// IMP=0x0010000000003626
- (id)init;	// IMP=0x00100000000035cc

@end


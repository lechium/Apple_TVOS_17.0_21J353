//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class AFSettingsConnection, NSString;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryDeleteSiriHistoryOperation : HMFOperation
{
    AFSettingsConnection *_settingsConnection;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000006ae00b
- (void).cxx_destruct;	// IMP=0x00000000006ade64
@property(readonly) AFSettingsConnection *settingsConnection; // @synthesize settingsConnection=_settingsConnection;
- (void)main;	// IMP=0x00000000006add20
- (id)initWithSettingsConnection:(id)arg1;	// IMP=0x00000000006adcaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


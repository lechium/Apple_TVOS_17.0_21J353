//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol AFBluetoothDeviceInfoMutating <NSObject>
- (void)setSupportsAnnounceCall:(_Bool)arg1;
- (void)setSupportsListeningModeAutomatic:(_Bool)arg1;
- (void)setSupportsListeningModeTransparency:(_Bool)arg1;
- (void)setSupportsListeningModeANC:(_Bool)arg1;
- (void)setSupportsSpokenNotification:(_Bool)arg1;
- (void)setSupportsJustSiri:(_Bool)arg1;
- (void)setSupportsVoiceTrigger:(_Bool)arg1;
- (void)setSupportsInEarDetection:(_Bool)arg1;
- (void)setIsAdvancedAppleAudioDevice:(_Bool)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setVendorID:(unsigned int)arg1;
- (void)setDeviceUID:(NSUUID *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setAddress:(NSString *)arg1;
@end


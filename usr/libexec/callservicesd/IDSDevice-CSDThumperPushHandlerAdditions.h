//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDevice.h>

@class NSArray, NSString;

@interface IDSDevice (CSDThumperPushHandlerAdditions)
+ (_Bool)isDeviceInAltMode;	// IMP=0x00100000001c1bed
+ (_Bool)pairedDeviceUniqueIDOverrideExists;	// IMP=0x00100000001c1bba
+ (id)pairedDeviceUniqueIDOverride;	// IMP=0x00100000001c1b5b
- (id)normalizedDeviceType;	// IMP=0x00100000000a44e4
- (id)csd_destinationForAlias:(id)arg1;	// IMP=0x00100000001a5d18
@property(readonly, copy, nonatomic) NSArray *csd_aliasStrings;
@property(readonly, copy, nonatomic) NSString *csd_localizedDeviceCategory;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001c1f61
- (_Bool)canReceiveMessagesForCallProvider:(id)arg1;	// IMP=0x00100000001c1ed2
@property(readonly, nonatomic) _Bool canReceiveRelayedGFTCalls;
@property(readonly, nonatomic) _Bool canReceiveRelayedCalls;
@property(readonly, nonatomic) _Bool supportsRelayCallingWithoutLocalRelayCallingEnabled;
@property(readonly, nonatomic) _Bool supportsRestrictingSecondaryCalling;
- (_Bool)isAudioAccessoryDevice;	// IMP=0x00100000001c1ce8
- (_Bool)isWatchDevice;	// IMP=0x00100000001c1c9d
@property(readonly, nonatomic, getter=isPairedDevice) _Bool pairedDevice;

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: audioAccessoryDevice
// Property attributes: (null)

@end


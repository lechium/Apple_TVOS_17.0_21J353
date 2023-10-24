//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CLDuetHomeKitAccessory : NSObject
{
    NSString *_homeUUID;	// 8 = 0x8
    NSString *_accessoryUUID;	// 16 = 0x10
    NSString *_accessoryName;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
    NSString *_serviceType;	// 40 = 0x28
    NSString *_characteristicType;	// 48 = 0x30
    NSString *_clientName;	// 56 = 0x38
    NSString *_source;	// 64 = 0x40
    NSString *_serviceUUID;	// 72 = 0x48
    NSNumber *_triggerLocalizationScan;	// 80 = 0x50
    NSNumber *_triggerRecordingScan;	// 88 = 0x58
}

@property(retain, nonatomic) NSNumber *triggerRecordingScan; // @synthesize triggerRecordingScan=_triggerRecordingScan;
@property(retain, nonatomic) NSNumber *triggerLocalizationScan; // @synthesize triggerLocalizationScan=_triggerLocalizationScan;
@property(retain, nonatomic) NSString *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(retain, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) NSString *homeUUID; // @synthesize homeUUID=_homeUUID;
- (void)dealloc;	// IMP=0x001000000021e1b2
- (id)initWithHomeUUID:(id)arg1 accessoryUUID:(id)arg2 accessoryName:(id)arg3 serviceName:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 clientName:(id)arg7 source:(id)arg8 serviceUUID:(id)arg9 triggerLocalizationScan:(id)arg10 triggerRecordingScan:(id)arg11;	// IMP=0x001000000021e093

@end


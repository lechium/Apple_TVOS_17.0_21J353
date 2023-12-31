//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMEventBase.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeLightBrightnessLoggerEvent : BMEventBase
{
    NSString *_homeUUID;	// 8 = 0x8
    NSString *_accessoryUUID;	// 16 = 0x10
    NSString *_characteristicUUID;	// 24 = 0x18
    NSString *_brightness;	// 32 = 0x20
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0010000000452ef0
- (void).cxx_destruct;	// IMP=0x0000000000452e9d
@property(readonly, nonatomic) NSString *brightness; // @synthesize brightness=_brightness;
@property(readonly, nonatomic) NSString *characteristicUUID; // @synthesize characteristicUUID=_characteristicUUID;
@property(readonly, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) NSString *homeUUID; // @synthesize homeUUID=_homeUUID;
- (id)proto;	// IMP=0x0000000000452dc4
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000452d27
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000452bda
- (id)encodeAsProto;	// IMP=0x0000000000452b8a
- (id)serialize;	// IMP=0x0000000000452b78
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithHomeUUID:(id)arg1 accessoryUUID:(id)arg2 characteristicUUID:(id)arg3 brightness:(id)arg4;	// IMP=0x0000000000452a70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


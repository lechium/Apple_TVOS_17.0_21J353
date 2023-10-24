//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDWakeConfigurationParameters, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDWakeConfiguration : NSObject
{
    NSData *_reserved;	// 8 = 0x8
    HMDWakeConfigurationParameters *_custom1;	// 16 = 0x10
    HMDWakeConfigurationParameters *_custom2;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000c8d650
- (void).cxx_destruct;	// IMP=0x0000000000c8c570
@property(retain, nonatomic) HMDWakeConfigurationParameters *custom2; // @synthesize custom2=_custom2;
@property(retain, nonatomic) HMDWakeConfigurationParameters *custom1; // @synthesize custom1=_custom1;
@property(retain, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c8c190
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c8c0d8
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000c8bc2c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000c8b84a
- (id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3;	// IMP=0x0000000000c8b792
- (id)init;	// IMP=0x0000000000c8b763

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSData;

@interface DYGPUDerivedEncoderCounterInfo : NSObject
{
    NSArray *_derivedCounterNames;	// 8 = 0x8
    NSData *_derivedCounters;	// 16 = 0x10
    NSData *_encoderInfos;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002bb55
- (void).cxx_destruct;	// IMP=0x002000000002bb22
@property(retain, nonatomic) NSData *encoderInfos; // @synthesize encoderInfos=_encoderInfos;
@property(retain, nonatomic) NSData *derivedCounters; // @synthesize derivedCounters=_derivedCounters;
@property(retain, nonatomic) NSArray *derivedCounterNames; // @synthesize derivedCounterNames=_derivedCounterNames;
- (MISSING_TYPE *)_enumerateEncoderDerivedDataAtIndex:withBlock: /* Error: Ran out of types for this method. */;	// IMP=0x001000000002ba1b
- (void)_enumerateEncoderDerivedData:(CDUnknownBlockType)arg1;	// IMP=0x001000000002b920
- (id)init;	// IMP=0x001000000002b8d2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002b846
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002b5ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002b472

@end


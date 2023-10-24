//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicMetadata : HMFObject
{
    NSNumber *_minimumValue;	// 8 = 0x8
    NSNumber *_maximumValue;	// 16 = 0x10
    NSNumber *_stepValue;	// 24 = 0x18
    NSNumber *_maxLength;	// 32 = 0x20
    NSString *_format;	// 40 = 0x28
    NSString *_units;	// 48 = 0x30
    NSString *_manufacturerDescription;	// 56 = 0x38
    NSArray *_validValues;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004eb958
+ (id)characteristicMetadataWithDictionary:(id)arg1;	// IMP=0x00100000004eb751
- (void).cxx_destruct;	// IMP=0x00000000004eb6ba
@property(readonly, copy, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;
@property(readonly, copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(readonly, copy, nonatomic) NSString *units; // @synthesize units=_units;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(readonly, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(readonly, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004eb44a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004eb233
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004eb228
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004eaf7c
@property(readonly) unsigned long long hash;
- (id)dictionaryRepresentation;	// IMP=0x00000000004eac7a
- (id)_descriptionDetails;	// IMP=0x00000000004ea609
- (id)dumpState;	// IMP=0x00000000004ea59c
@property(readonly, copy) NSString *description;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2 stepValue:(id)arg3 maxLength:(id)arg4 validValues:(id)arg5 format:(id)arg6 units:(id)arg7 manufacturerDescription:(id)arg8;	// IMP=0x00000000004ea30f
- (id)init;	// IMP=0x00000000004ea267

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


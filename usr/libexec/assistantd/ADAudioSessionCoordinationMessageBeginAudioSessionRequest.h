//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ADAudioSessionCoordinationMessageBeginAudioSessionRequest : NSObject
{
    NSDate *_effectiveDate;	// 8 = 0x8
    double _expirationDuration;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001f18b1
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f1864
- (void).cxx_destruct;	// IMP=0x00200000001f16c8
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
@property(readonly, copy, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
- (id)buildDictionaryRepresentation;	// IMP=0x00100000001f15fb
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000001f14b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001f1418
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001f1340
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001f1335
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001f1249
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001f1150
@property(readonly, copy) NSString *description;
- (id)initWithEffectiveDate:(id)arg1 expirationDuration:(double)arg2;	// IMP=0x00100000001f1096
- (id)init;	// IMP=0x00100000001f1082
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f0f7d
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f18b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


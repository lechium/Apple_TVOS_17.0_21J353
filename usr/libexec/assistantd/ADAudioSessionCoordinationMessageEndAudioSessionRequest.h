//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ADAudioSessionCoordinationMessageEndAudioSessionRequest : NSObject
{
    NSDate *_effectiveDate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000b47f3
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b47a6
- (void).cxx_destruct;	// IMP=0x00200000000b4684
@property(readonly, copy, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
- (id)buildDictionaryRepresentation;	// IMP=0x00100000000b4619
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000b4566
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000b4543
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000b44b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b44ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b4408
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000b436c
@property(readonly, copy) NSString *description;
- (id)initWithEffectiveDate:(id)arg1;	// IMP=0x00100000000b42c2
- (id)init;	// IMP=0x00100000000b42ae
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b41bb
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b47fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000117d2c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117cdf
- (id)buildDictionaryRepresentation;	// IMP=0x0020000000117c4c
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0010000000117c11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000117c0b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000117bf9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000117bee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000117bbf
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000117b52
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0010000000117b2a
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117a84
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117d34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


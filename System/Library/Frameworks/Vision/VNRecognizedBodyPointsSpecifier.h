//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNRecognizedBodyPointsSpecifier
{
    NSArray *_orderedPersonKeypoints;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d45c
- (void).cxx_destruct;	// IMP=0x000000000000d0e3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cf75
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000cef8
- (id)populatedMLMultiArrayAndReturnError:(id *)arg1;	// IMP=0x000000000000c949
- (id)pointKeyGroupLabelsMapping;	// IMP=0x000000000000c919
- (id)availableGroupKeys;	// IMP=0x000000000000c8e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c84c
- (unsigned long long)hash;	// IMP=0x000000000000c7f2
- (id)initWithVCPPersonObservation:(id)arg1 originatingRequestSpecifier:(id)arg2;	// IMP=0x000000000000c250

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHNonTextCandidateStroke.h"

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke
{
}

- (id)description;	// IMP=0x000000000007bee0
- (_Bool)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 strokeClassification:(long long)arg3;	// IMP=0x000000000007ad30
- (_Bool)adjustSupportByRemovingStrokeIdentifier:(id)arg1;	// IMP=0x000000000007ad20
@property(retain, nonatomic) NSDictionary *supportByStrokeIdentifier; // @dynamic supportByStrokeIdentifier;
@property(nonatomic) long long fallbackClassification; // @dynamic fallbackClassification;

@end


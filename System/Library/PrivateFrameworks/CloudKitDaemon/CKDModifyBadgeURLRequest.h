//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@interface CKDModifyBadgeURLRequest : CKDURLRequest
{
    unsigned long long _badgeValue;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000353f4f
- (id)generateRequestOperations;	// IMP=0x0000000000353db2
- (id)requestOperationClasses;	// IMP=0x0000000000353d46
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000353d17
- (id)initWithOperation:(id)arg1 badgeValue:(unsigned long long)arg2;	// IMP=0x0000000000353cd3

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessageCriterion, NSIndexSet;

__attribute__((visibility("hidden")))
@interface _MFLibrarySearchableIndexResultKey : NSObject
{
    MFMessageCriterion *_criterion;	// 8 = 0x8
    NSIndexSet *_mailboxIDs;	// 16 = 0x10
}

@property(copy, nonatomic) NSIndexSet *mailboxIDs; // @synthesize mailboxIDs=_mailboxIDs;
@property(retain, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006f833
- (unsigned long long)hash;	// IMP=0x000000000006f7f4
- (id)description;	// IMP=0x000000000006f7a6
- (void)dealloc;	// IMP=0x000000000006f75c

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface FARemoveFamilyMemberOperation
{
    NSNumber *_dsidOfMemberToRemove;	// 8 = 0x8
    CDUnknownBlockType _removeMemberCompletionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000244e
@property(copy) CDUnknownBlockType removeMemberCompletionHandler; // @synthesize removeMemberCompletionHandler=_removeMemberCompletionHandler;
@property(readonly, copy) NSNumber *dsidOfMemberToRemove; // @synthesize dsidOfMemberToRemove=_dsidOfMemberToRemove;
- (id)removeMember;	// IMP=0x001000000000224b
- (id)initWithNetworkService:(id)arg1 dsidOfMemberToRemove:(id)arg2;	// IMP=0x00100000000021d3

@end


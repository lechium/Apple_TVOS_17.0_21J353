//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PLObliterationTask.h"

@class ACAccount, ACAccountStore;

__attribute__((visibility("hidden")))
@interface _PLRemoveAccountTask : PLObliterationTask
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000070bc
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)_begin;	// IMP=0x0000000000006ea7
- (id)initWithQueue:(id)arg1 accountStore:(id)arg2 account:(id)arg3;	// IMP=0x0000000000006b92

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (DAExtensions)
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2;	// IMP=0x0060000000023370
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id *)arg2;	// IMP=0x0060000000022f27
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;	// IMP=0x0060000000022da8
- (id)da_accounts;	// IMP=0x0060000000022c4a
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0060000000022c2f
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000022c15
- (void)da_loadDAAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0060000000022b76
- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0060000000021a3b
@end


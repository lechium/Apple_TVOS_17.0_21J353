//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SQLiteConnection;

@interface StoreKitMessagesDatabaseTransaction
{
}

- (_Bool)removeRevocationInfoForUser:(id)arg1 inApp:(id)arg2;	// IMP=0x00200000000693d4
- (_Bool)addRevocationInfo:(id)arg1;	// IMP=0x0010000000069232
- (_Bool)removeMessageInfoForUser:(id)arg1 inApp:(id)arg2 type:(long long)arg3 withError:(id *)arg4;	// IMP=0x001000000006907a
- (_Bool)addMessageInfo:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000068e6e

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNResult, NSString;

__attribute__((visibility("hidden")))
@interface CNContactStoreFetchExecutor : NSObject
{
    CNContactStore *_store;	// 8 = 0x8
    CNResult *_result;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007903c
@property(retain) CNResult *result; // @synthesize result=_result;
@property(readonly) CNContactStore *store; // @synthesize store=_store;
- (void)visitChangeHistoryFetchRequest:(id)arg1;	// IMP=0x0000000000078f05
- (void)visitContactFetchRequest:(id)arg1;	// IMP=0x0000000000078d9c
- (id)countForFetchRequest:(id)arg1;	// IMP=0x0000000000078ccc
- (id)executeFetchRequest:(id)arg1;	// IMP=0x0000000000078bfc
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000000078b6c
- (id)init;	// IMP=0x0000000000078b2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

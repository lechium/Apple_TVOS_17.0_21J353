//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _LSLocalQueryResolver;

__attribute__((visibility("hidden")))
@interface _LSXPCQueryResolver : NSObject
{
    _LSLocalQueryResolver *_localResolver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010fc2a
- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000010f9b6
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010ef91
- (id)resolveExpensiveRemoteQueriesInSet:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010ebed
- (id)resolveWhatWeCanLocallyWithQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010e898
- (id)init;	// IMP=0x000000000010e824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


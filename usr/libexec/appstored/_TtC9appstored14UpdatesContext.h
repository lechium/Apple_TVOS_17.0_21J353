//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, XPCRequestToken, _TtC9appstored6LogKey;

@interface _TtC9appstored14UpdatesContext : NSObject
{
    MISSING_TYPE *callbackHandler;	// 8 = 0x8
    MISSING_TYPE *includeMetrics;	// 24 = 0x18
    MISSING_TYPE *isVPPLookup;	// 25 = 0x19
    MISSING_TYPE *logKey;	// 32 = 0x20
    MISSING_TYPE *reason;	// 40 = 0x28
    MISSING_TYPE *requestToken;	// 48 = 0x30
    MISSING_TYPE *userInitiated;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0040000000031220
@property(nonatomic, readonly) NSString *humanReadableReason;
@property(nonatomic, readonly) CDUnknownBlockType callbackHandler;
- (id)initWithReason:(long long)arg1 requestToken:(id)arg2 logKey:(id)arg3 callbackHandler:(CDUnknownBlockType)arg4 includeMetrics:(_Bool)arg5 isVPPLookup:(_Bool)arg6 userInitiated:(_Bool)arg7;	// IMP=0x0010000000030e50
- (id)initWithReason:(long long)arg1;	// IMP=0x0010000000030de0
- (id)init;	// IMP=0x0010000000030d70
@property(nonatomic, readonly) _Bool shouldPerformUpdates;
@property(nonatomic, readonly) _Bool isBackgroundRequest;
@property(nonatomic, readonly) _Bool userInitiated; // @synthesize userInitiated;
@property(nonatomic, readonly) XPCRequestToken *requestToken; // @synthesize requestToken;
@property(nonatomic, readonly) long long reason; // @synthesize reason;
@property(nonatomic, readonly) _TtC9appstored6LogKey *logKey; // @synthesize logKey;
@property(nonatomic, readonly) _Bool isVPPLookup; // @synthesize isVPPLookup;
@property(nonatomic, readonly) _Bool includeMetrics; // @synthesize includeMetrics;

@end

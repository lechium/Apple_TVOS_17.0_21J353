//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NLXPCSpellServerClient : NSObject
{
    NSString *_serverName;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
}

+ (void)requestAssetsForLanguage:(id)arg1;	// IMP=0x00600000000447dd
+ (id)spellServerClient;	// IMP=0x0060000000044741
- (void).cxx_destruct;	// IMP=0x00000000000448cc
- (void)sendCommand:(id)arg1;	// IMP=0x00000000000445f4
- (_Bool)isValid;	// IMP=0x00000000000445e7
- (id)connection;	// IMP=0x00000000000445d9
- (id)serverName;	// IMP=0x00000000000445cb
- (void)dealloc;	// IMP=0x0000000000044589
- (id)initWithServerName:(id)arg1;	// IMP=0x0000000000044407

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyConnectionHandle : NSObject
{
    CDUnknownBlockType _willRelease;	// 8 = 0x8
    id _connectionKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ef42
@property(readonly, nonatomic) id connectionKey; // @synthesize connectionKey=_connectionKey;
- (void)dealloc;	// IMP=0x000000000000eef8
- (id)initWithConnectionKey:(id)arg1 willRelease:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ee3f

@end


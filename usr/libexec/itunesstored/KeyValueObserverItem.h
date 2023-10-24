//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface KeyValueObserverItem : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    id _object;	// 24 = 0x18
}

@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dealloc;	// IMP=0x0010000000124b13
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000124a92

@end


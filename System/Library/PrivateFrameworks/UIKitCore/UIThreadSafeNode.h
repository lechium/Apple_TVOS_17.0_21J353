//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIThreadSafeNode : NSObject
{
    DOMNode *_node;	// 8 = 0x8
}

+ (id)threadSafeNodeWithNode:(id)arg1;	// IMP=0x0060000001443004
- (void).cxx_destruct;	// IMP=0x00000000014433f0
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000144336c
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000014432db
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000144327d
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000001443208
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014431f3
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000014431a0
- (id)description;	// IMP=0x00000000014430df
- (id)initWithNode:(id)arg1;	// IMP=0x0000000001443074
- (id)_realNode;	// IMP=0x0000000001443409

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVWeakReference.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AVRetainReleaseWeakReference : AVWeakReference
{
    NSString *_cachedReferencedObjectDescription;	// 8 = 0x8
    id _weakStorage;	// 16 = 0x10
}

- (id)referencedObject;	// IMP=0x0000000000104d87
- (id)description;	// IMP=0x0000000000104d37
- (void)dealloc;	// IMP=0x0000000000104ce4
- (id)init;	// IMP=0x0000000000104cd0
- (id)initWithReferencedObject:(id)arg1;	// IMP=0x0000000000104c2e

@end


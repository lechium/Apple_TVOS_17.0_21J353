//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebResourcePrivate : NSObject
{
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> coreResource;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0060000000124b70
- (id).cxx_construct;	// IMP=0x0000000000124ca0
- (void).cxx_destruct;	// IMP=0x0000000000124c70
- (void)dealloc;	// IMP=0x0000000000124c20
- (id)initWithCoreResource:(void *)arg1;	// IMP=0x0000000000124bb0
- (id)init;	// IMP=0x0000000000124b80

@end

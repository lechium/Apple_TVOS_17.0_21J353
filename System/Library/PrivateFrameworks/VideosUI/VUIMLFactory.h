//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMLFactory : NSObject
{
}

+ (void)_registerElements;	// IMP=0x00800000001b1182
+ (id)sharedInstance;	// IMP=0x00800000001b0c8f
- (id)_URLForResource:(id)arg1 inBundle:(id)arg2;	// IMP=0x00000000001b126e
- (id)imageForResource:(id)arg1;	// IMP=0x00000000001b106b
- (id)URLForResource:(id)arg1;	// IMP=0x00000000001b0f7c
- (id)imageProxyForElement:(id)arg1 withLayout:(id)arg2;	// IMP=0x00000000001b0f74
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x00000000001b0f6c
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x00000000001b0d4c
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000000001b0d34
- (id)init;	// IMP=0x00000000001b0ce4

@end


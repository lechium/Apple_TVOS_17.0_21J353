//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface _TVTemplateFactory : NSObject
{
    NSBundle *_tvmlKitBundle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000116a77
- (id)_slideshowControllerWithElement:(id)arg1;	// IMP=0x00000000001165fd
- (void)_registerCustomAnimators;	// IMP=0x0000000000116183
- (void)_registerTemplateControllers;	// IMP=0x0000000000115458
- (void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3;	// IMP=0x000000000011515e
- (void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(_Bool)arg3;	// IMP=0x0000000000114eb4
- (id)init;	// IMP=0x0000000000114e53

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPContentTasteController;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPContentTasteController : NSObject
{
    MPContentTasteController *_underlyingContentTasteController;	// 8 = 0x8
}

+ (id)contentTasteControllerDidChangeNotificationName;	// IMP=0x004000000000fc6c
+ (id)sharedContentTasteController;	// IMP=0x004000000000f7e3
- (void).cxx_destruct;	// IMP=0x000000000000fd1a
- (void)_handleContentTasteControllerDidChangeNotification:(id)arg1;	// IMP=0x000000000000fc79
- (long long)_underlyingTasteTypeFromContentTasteType:(long long)arg1;	// IMP=0x000000000000fc55
- (long long)_contentTasteTypeFromUnderlyingTasteType:(long long)arg1;	// IMP=0x000000000000fc3e
- (void)setTasteType:(long long)arg1 forModelObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fb96
- (long long)tasteTypeForModelObject:(id)arg1;	// IMP=0x000000000000fb2f
- (void)dealloc;	// IMP=0x000000000000fa95
- (id)_initWithUnderlyingContentTasteController:(id)arg1;	// IMP=0x000000000000f91a

@end

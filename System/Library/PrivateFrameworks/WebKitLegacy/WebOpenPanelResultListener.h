//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebOpenPanelResultListener : NSObject
{
    struct RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> _chooser;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000010cad0
- (void).cxx_destruct;	// IMP=0x000000000010ca90
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;	// IMP=0x000000000010c880
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;	// IMP=0x000000000010c7f0
- (void)chooseFilenames:(id)arg1;	// IMP=0x000000000010c690
- (void)chooseFilename:(id)arg1;	// IMP=0x000000000010c5c0
- (void)cancel;	// IMP=0x000000000010c580
- (id)initWithChooser:(void *)arg1;	// IMP=0x000000000010c500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


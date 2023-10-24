//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFGraphicSymbolDescriptor, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ISGraphicSymbolResource : NSObject
{
    IFGraphicSymbolDescriptor *_descriptor;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_symbolName;	// 24 = 0x18
}

+ (id)defaultResource;	// IMP=0x001000000002b6a2
+ (id)graphicSymbolResourceWithConfiguration:(id)arg1 symbolName:(id)arg2 url:(id)arg3;	// IMP=0x001000000002b3d1
+ (id)graphicSymbolResourceWithRecipe:(id)arg1 url:(id)arg2;	// IMP=0x001000000002b16d
- (void).cxx_destruct;	// IMP=0x000000000002bcbe
@property(retain) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(retain) IFGraphicSymbolDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)updateDescriptorWithImageDescriptor:(id)arg1;	// IMP=0x000000000002bb1f
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000002b84d
- (id)initWithGraphicSymbolDescriptor:(id)arg1 symbolName:(id)arg2 url:(id)arg3;	// IMP=0x000000000002b761

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


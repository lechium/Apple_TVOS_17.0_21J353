//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIKBArbiterClientToken : NSObject
{
    int _identifier;	// 8 = 0x8
    NSString *_sceneIdentityString;	// 16 = 0x10
}

+ (id)uniqueToken;	// IMP=0x006000000147b760
- (void).cxx_destruct;	// IMP=0x000000000147b8fb
@property(copy, nonatomic) NSString *sceneIdentityString; // @synthesize sceneIdentityString=_sceneIdentityString;
- (id)description;	// IMP=0x000000000147b83d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000147b7ef
- (id)init;	// IMP=0x000000000147b772

@end


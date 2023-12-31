//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ACDPluginEntry : NSObject
{
    id _principalObject;	// 8 = 0x8
    NSSet *_supportedAccountTypes;	// 16 = 0x10
    NSSet *_supportedDataclasses;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    struct {
        unsigned int principalObject:1;
        unsigned int supportedAccountTypes:1;
        unsigned int supportedDataclasses:1;
        unsigned int identifier:1;
    } _fetchedFlags;	// 40 = 0x28
    NSBundle *_bundle;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000727a6
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)debugDescription;	// IMP=0x000000000007267b
- (id)description;	// IMP=0x00000000000725d8
- (_Bool)principalObjectRespondsToSelector:(SEL)arg1;	// IMP=0x00000000000725a3
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id principalObject;
@property(readonly, nonatomic) NSSet *supportedDataclasses;
@property(readonly, nonatomic) NSSet *supportedAccountTypes;
- (id)initWithBundle:(id)arg1;	// IMP=0x000000000007218b
- (id)init;	// IMP=0x0000000000072160

@end


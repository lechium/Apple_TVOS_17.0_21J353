//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;
@protocol SHJSONLCustomCatalogTransformerDelegate;

__attribute__((visibility("hidden")))
@interface SHJSONLCustomCatalogTransformer : NSObject
{
    id <SHJSONLCustomCatalogTransformerDelegate> _delegate;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDictionary *_header;	// 24 = 0x18
}

+ (id)outputFileHeader;	// IMP=0x001000000001ad89
+ (id)catalogFileRepresentationOfMediaItems:(id)arg1 withID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001aa3d
+ (id)catalogFileRepresentationOfSignature:(id)arg1 withID:(id)arg2;	// IMP=0x001000000001a92b
+ (id)signatureFromFileRow:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001a757
+ (id)mediaItemFromFileRow:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001a6bc
+ (id)headerFromFileRow:(id)arg1;	// IMP=0x001000000001a6a6
+ (id)IDFromFileRow:(id)arg1;	// IMP=0x001000000001a68a
+ (_Bool)objectIsSignature:(id)arg1;	// IMP=0x001000000001a58f
+ (_Bool)objectIsMediaItem:(id)arg1;	// IMP=0x001000000001a494
+ (_Bool)objectIsHeader:(id)arg1;	// IMP=0x001000000001a399
- (void).cxx_destruct;	// IMP=0x000000000001ae88
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <SHJSONLCustomCatalogTransformerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)parsedJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a064
- (void)reset;	// IMP=0x000000000001a032

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

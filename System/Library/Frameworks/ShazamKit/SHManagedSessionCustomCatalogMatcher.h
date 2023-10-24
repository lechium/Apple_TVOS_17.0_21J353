//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol SHMatcher, SHMatcherDelegate;

__attribute__((visibility("hidden")))
@interface SHManagedSessionCustomCatalogMatcher : NSObject
{
    id <SHMatcherDelegate> _delegate;	// 8 = 0x8
    id <SHMatcher> _customCatalogMatcher;	// 16 = 0x10
    NSUUID *_currentRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000dcec
@property(readonly, nonatomic) NSUUID *currentRequestID; // @synthesize currentRequestID=_currentRequestID;
@property(readonly, nonatomic) id <SHMatcher> customCatalogMatcher; // @synthesize customCatalogMatcher=_customCatalogMatcher;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x000000000000db21
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x000000000000dab8
- (void)stopRecognition;	// IMP=0x000000000000da7b
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x000000000000d9f2
- (id)initWithCustomCatalog:(id)arg1;	// IMP=0x000000000000d95e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIOModelDescription, MIOVersionInfo, NSArray, NSDictionary, NSString, NSURL;
@protocol MIOModeling;

__attribute__((visibility("hidden")))
@interface MIOPackagedFileModel : NSObject
{
    MIOModelDescription *_modelDescription;	// 8 = 0x8
    NSURL *_packageURL;	// 16 = 0x10
    NSObject<MIOModeling> *_specificationFileModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002f5d3
@property(copy, nonatomic) NSObject<MIOModeling> *specificationFileModel; // @synthesize specificationFileModel=_specificationFileModel;
@property(copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
@property(copy, nonatomic) MIOModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002f417
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f245
@property(readonly, nonatomic) void *irProgram;
@property(readonly, copy, nonatomic) NSDictionary *layerHistogram;
@property(readonly, copy, nonatomic) NSArray *subModels;
@property(readonly, copy, nonatomic) NSArray *layers;
@property(readonly, copy, nonatomic) NSString *modelTypeName;
@property(readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d93a
- (id)initWithModel:(id)arg1;	// IMP=0x000000000002d8bb
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c220

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKPolygonalItemGroup : NSObject
{
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfo;	// 8 = 0x8
    struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> _fillMeshes;	// 200 = 0xc8
    shared_ptr_fb8448a7 _meshStorage;	// 224 = 0xe0
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _fillCullingGroups;	// 240 = 0xf0
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _strokeCullingGroups;	// 624 = 0x270
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _venueCullingGroups;	// 1008 = 0x3f0
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _venueEndCapCullingGroups;	// 1392 = 0x570
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _venueWallHorizontalStrokeCullingGroups;	// 1776 = 0x6f0
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> _venueWallVerticalStrokeCullingGroups;	// 2160 = 0x870
    struct unordered_map<std::pair<const void *, unsigned long>, std::vector<md::Edge>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, std::allocator<std::pair<const std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> _polygonEdges;	// 2544 = 0x9f0
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> _featureIds;	// 2584 = 0xa18
    struct Box<float, 3> _boundingBox;	// 2624 = 0xa40
    float _tileZoom;	// 2648 = 0xa58
    float _contentScale;	// 2652 = 0xa5c
    unsigned int _cullingMask;	// 2656 = 0xa60
    _Bool _isFixedSize;	// 2660 = 0xa64
    _Bool _stylesUpToDate;	// 2661 = 0xa65
    _Bool _hasRouteAttributes;	// 2662 = 0xa66
    struct vector<ggl::Batcher, std::allocator<ggl::Batcher>> _fillRenderItemBatchers;	// 2664 = 0xa68
    struct vector<ggl::Batcher, std::allocator<ggl::Batcher>> _strokeRenderItemBatchers;	// 2688 = 0xa80
    Matrix_8746f91e _centroid;	// 2712 = 0xa98
    struct FeatureStyleAttributesSet _attributeSets;	// 2720 = 0xaa0
    struct unordered_map<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, std::allocator<std::pair<const StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>> _styleQueries;	// 2776 = 0xad8
    shared_ptr_3e3c7f86 _styleManager;	// 2816 = 0xb00
    struct PolygonRouteAttributes _routeAttributes;	// 2832 = 0xb10
}

- (id).cxx_construct;	// IMP=0x00000000003fea84
- (void).cxx_destruct;	// IMP=0x00000000003fe864
@property(readonly, nonatomic) Matrix_8746f91e centroid; // @synthesize centroid=_centroid;
@property(readonly, nonatomic) _Bool isFixedSize; // @synthesize isFixedSize=_isFixedSize;
@property(readonly, nonatomic) unsigned int cullingMask; // @synthesize cullingMask=_cullingMask;
- (void)clearRouteAttributes;	// IMP=0x00000000003fe825
- (void)setRouteAttributes:(const struct PolygonRouteAttributes *)arg1;	// IMP=0x00000000003fe7f9
- (void)updateCachedStyles;	// IMP=0x00000000003fe174
@property(readonly, nonatomic) const void *featureIds;
- (_Bool)hasFeatureId:(unsigned long long)arg1;	// IMP=0x00000000003fe140
- (_Bool)canAcceptPolygon:(void *)arg1;	// IMP=0x00000000003fe089
- (void)didFinishAddingData;	// IMP=0x00000000003fddb5
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;	// IMP=0x00000000003fda88
- (unsigned char)indexForGeoFeatureAttributes:(const void *)arg1;	// IMP=0x00000000003fd599
- (const void *)commitRangesToVerticalVenueWallStrokeRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;	// IMP=0x00000000003fd4d2
- (const void *)commitRangesToHorizontalVenueWallStrokeRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;	// IMP=0x00000000003fd40b
- (const void *)commitRangesToVenueWallEndCapRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;	// IMP=0x00000000003fd344
- (const void *)commitRangesToVenueWallRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;	// IMP=0x00000000003fd27d
- (const void *)commitRangesToStrokeRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x00000000003fd1a7
- (const void *)commitRangesToFillRenderItemBatcher:(void *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_ce5c9822)arg4;	// IMP=0x00000000003fd0d1
@property(readonly, nonatomic) void *fillMeshes;
@property(readonly, nonatomic) float tileZoom;
- (void *)styleQueries:(const struct StyleQueryOverride *)arg1;	// IMP=0x00000000003fccfc
@property(readonly, nonatomic) Matrix_811b2232 size;
@property(readonly, nonatomic) const void *maxPoint;
@property(readonly, nonatomic) const void *origin;
- (const void *)attributeSets;	// IMP=0x00000000003fcc99
- (unsigned char)maxAttributeSetsPerGroup;	// IMP=0x00000000003fcc8e
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void *)arg3 contentScale:(float)arg4 storage:(shared_ptr_fb8448a7)arg5;	// IMP=0x00000000003fc7a4
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void *)arg3 contentScale:(float)arg4;	// IMP=0x00000000003fc720

@end


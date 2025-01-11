// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterFollow",
    products: [
        .library(name: "TreeSitterFollow", targets: ["TreeSitterFollow"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterFollow",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterFollowTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterFollow",
            ],
            path: "bindings/swift/TreeSitterFollowTests"
        )
    ],
    cLanguageStandard: .c11
)

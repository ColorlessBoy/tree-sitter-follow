import XCTest
import SwiftTreeSitter
import TreeSitterFollow

final class TreeSitterFollowTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_follow())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Follow grammar")
    }
}
